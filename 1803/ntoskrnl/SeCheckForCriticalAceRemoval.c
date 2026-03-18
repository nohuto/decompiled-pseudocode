/*
 * XREFs of SeCheckForCriticalAceRemoval @ 0x1404E14B0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     SepCheckForCriticalAceRemoval @ 0x140063350 (SepCheckForCriticalAceRemoval.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeLocateProcessImageName @ 0x14050E910 (SeLocateProcessImageName.c)
 */

char __fastcall SeCheckForCriticalAceRemoval(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4)
{
  NTSTATUS v5; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  int Length; // r8d
  wchar_t *Buffer; // rdx
  char v10; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v11[7]; // [rsp+31h] [rbp-8h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp+27h]
  int v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+6Ch] [rbp+33h]
  wchar_t *v17; // [rsp+70h] [rbp+37h]
  _DWORD v18[2]; // [rsp+78h] [rbp+3Fh] BYREF

  pImageFileName = 0LL;
  LOBYTE(v5) = SepCheckForCriticalAceRemoval(a1, a2, a3, &v10, v11);
  if ( v10 )
  {
    if ( !v11[0] )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      v5 = SeLocateProcessImageName(CurrentThreadProcess, &pImageFileName);
      if ( v5 >= 0 && stru_140397750.LevelPlus1 > 5 )
      {
        LOBYTE(v5) = TlgKeywordOn(&stru_140397750, 0x200000000000uLL);
        if ( (_BYTE)v5 )
        {
          Length = pImageFileName->Length;
          Buffer = pImageFileName->Buffer;
          v16 = 0;
          v18[1] = 0;
          v14 = v18;
          v15 = 2;
          v17 = Buffer;
          v18[0] = Length;
          LOBYTE(v5) = TlgWrite(&stru_140397750, &unk_14030E23F, 0LL, 0LL, 4u, &pData);
        }
      }
    }
  }
  *a4 = 0;
  return v5;
}
