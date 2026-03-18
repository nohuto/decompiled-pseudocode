/*
 * XREFs of NtInitializeNlsFiles @ 0x14045DFB4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x14017DB60 (ZwQueryDefaultLocale.c)
 *     ExpGetGlobalLocaleSection @ 0x14045DD20 (ExpGetGlobalLocaleSection.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtInitializeNlsFiles(_QWORD *a1, DWORD *a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  NTSTATUS result; // eax
  int v10; // ebx
  _DWORD v11[2]; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp-20h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleId; // [rsp+A8h] [rbp+20h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  v6 = 0x7FFFFFFF0000LL;
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a1;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v8 = (__int64)a2;
  *(_DWORD *)v8 = *(_DWORD *)v8;
  if ( (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a3 < 0x7FFFFFFF0000LL )
    v6 = a3;
  *(_BYTE *)v6 = *(_BYTE *)v6;
  *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
  result = ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( result >= 0 )
    {
      v13 = 0LL;
      v11[0] = 0;
      v11[1] = 0;
      v14 = 0LL;
      v10 = MmMapViewOfSection(
              (_DWORD)Object,
              KeGetCurrentThread()->ApcState.Process,
              (unsigned int)&v13,
              0,
              0LL,
              (__int64)v11,
              (__int64)&v14,
              1,
              0x400000,
              2);
      ObfDereferenceObject(Object);
      if ( v10 >= 0 )
      {
        *a1 = v13;
        *a2 = DefaultLocaleId;
        *(_QWORD *)a3 = NlsDefaultCasingTableSize;
      }
      return v10;
    }
  }
  return result;
}
