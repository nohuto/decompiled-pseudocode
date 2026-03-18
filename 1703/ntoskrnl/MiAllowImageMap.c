/*
 * XREFs of MiAllowImageMap @ 0x1404415B0
 * Callers:
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x140025C34 (MiGetControlAreaLoadConfig.c)
 *     SeGetTrustLabelAce @ 0x140093830 (SeGetTrustLabelAce.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     SeQueryMandatoryLabel @ 0x14041E8D4 (SeQueryMandatoryLabel.c)
 *     ObReleaseObjectSecurity @ 0x1404F4870 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1404F49F0 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r10d
  int ObjectSecurity; // edi
  unsigned __int64 v8; // rbx
  PSECURITY_DESCRIPTOR v9; // rbx
  _DWORD *ControlAreaLoadConfig; // rax
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 1740);
  if ( (v4 & 0x800) != 0 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
    return 3221225506LL;
  if ( *(_BYTE *)(a4 + 50) )
  {
    if ( (v4 & 0x20000000) != 0 )
    {
      ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
      if ( !ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0 )
        return 3221227014LL;
    }
  }
  ObjectSecurity = 0;
  if ( (v4 & 0x1000) != 0 )
  {
    MemoryAllocated = 0;
    v8 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v8, SecurityDescriptor, &MemoryAllocated, 0LL);
    MiDereferenceControlAreaFile(a3, v8);
    if ( ObjectSecurity < 0 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v9 = SecurityDescriptor[0];
      if ( (unsigned int)SeQueryMandatoryLabel((__int64)SecurityDescriptor[0]) <= 0x1000
        && !SeGetTrustLabelAce((__int64)v9) )
      {
        ObjectSecurity = -1073741790;
      }
      ObReleaseObjectSecurity(v9, MemoryAllocated);
    }
  }
  return (unsigned int)ObjectSecurity;
}
