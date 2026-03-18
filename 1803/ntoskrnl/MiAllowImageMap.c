/*
 * XREFs of MiAllowImageMap @ 0x1404B5C48
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x14003E604 (MiGetControlAreaLoadConfig.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     SeGetTrustLabelAce @ 0x14005E540 (SeGetTrustLabelAce.c)
 *     ObpGetObjectSecurity @ 0x1404C1DAC (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1404C3DA0 (ObReleaseObjectSecurity.c)
 *     SeQueryMandatoryLabel @ 0x140571340 (SeQueryMandatoryLabel.c)
 *     EtwpTimLogMitigationForProcess @ 0x1405783A0 (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407ADE1C (EtwTimLogProhibitLowILImageMap.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v8; // ebx
  int v9; // esi
  int ObjectSecurity; // ebx
  int v11; // edi
  int v12; // esi
  ULONG_PTR v14; // r14
  _DWORD *ControlAreaLoadConfig; // rax
  void *v16; // r8
  PSECURITY_DESCRIPTOR SecurityDescriptor[7]; // [rsp+20h] [rbp-38h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 2088);
  v8 = v4 & 0x80000;
  if ( ((v4 & 0x80000) != 0 || (v4 & 0x100000) != 0) && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v16 = &MITIGATION_AUDIT_PROHIBIT_REMOTE_IMAGE_MAP;
    if ( v8 )
      v16 = &MITIGATION_ENFORCE_PROHIBIT_REMOTE_IMAGE_MAP;
    EtwpTimLogMitigationForProcess(1LL, (unsigned int)(v8 != 0) + 1, v16, a1);
    if ( v8 )
      return 3221225506LL;
  }
  if ( *(_BYTE *)(a4 + 50) )
  {
    if ( (*(_DWORD *)(a1 + 2088) & 4) != 0 )
    {
      ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
      if ( !ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0 )
        return 3221227014LL;
    }
  }
  v9 = v4;
  ObjectSecurity = 0;
  v11 = v4 & 0x400000;
  v12 = v9 & 0x200000;
  if ( v12 || v11 )
  {
    MemoryAllocated = 0;
    v14 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v14, SecurityDescriptor, &MemoryAllocated, 0LL);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      if ( (unsigned int)SeQueryMandatoryLabel(SecurityDescriptor[0]) <= 0x1000
        && !SeGetTrustLabelAce((__int64)SecurityDescriptor[0]) )
      {
        ObjectSecurity = -1073741790;
      }
      ObReleaseObjectSecurity(SecurityDescriptor[0], MemoryAllocated);
    }
    if ( ObjectSecurity == -1073741790 )
    {
      EtwTimLogProhibitLowILImageMap((unsigned int)(v12 != 0) + 1, a1, v14 + 88);
      if ( !v12 )
        ObjectSecurity = 0;
    }
    MiDereferenceControlAreaFile(a3, v14);
  }
  return (unsigned int)ObjectSecurity;
}
