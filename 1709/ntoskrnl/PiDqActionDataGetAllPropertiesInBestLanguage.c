/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406C3CF4
 * Callers:
 *     PiDqActionDataCreate @ 0x14052DF68 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDqOpenObjectRegKey @ 0x140447A84 (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140524FB4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqGrowPropertyArray @ 0x1405E6F50 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x1406C46E4 (PiDqPnPGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        NTSTRSAFE_PCWSTR a5,
        const void **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  void *v8; // rbx
  int v9; // esi
  unsigned int v10; // r12d
  int v11; // edi
  int v12; // r9d
  unsigned int *v13; // r14
  unsigned int v14; // eax
  const void **v15; // r15
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rsi
  const wchar_t *v19; // r13
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  void *v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h]

  v25 = a4;
  Handle = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v9 = a4;
  v10 = 0;
  if ( a2 != 1 )
    v10 = a3;
  v11 = PiDqOpenObjectRegKey(a2, a4, a3, 1, 0, a1, &Handle);
  if ( v11 >= 0 )
  {
    v11 = PiDqPnPGetObjectPropertyKeys(v9, v10, (_DWORD)Handle, v12, (__int64)&v22, (__int64)&v24);
    if ( v11 >= 0 )
    {
      v13 = a7;
      v14 = v24;
      v15 = a6;
      v16 = *a7;
      v17 = *a7 + v24;
      if ( *a8 < v17 )
      {
        *a8 = v17;
        v11 = PiDqGrowPropertyArray(v15, v16, v17);
        if ( v11 < 0 )
          goto LABEL_13;
        v14 = v24;
      }
      v18 = 0LL;
      if ( v14 )
      {
        v19 = a5;
        v8 = v22;
        do
        {
          v11 = PiDqPnPGetObjectPropertyInBestLocale(
                  v25,
                  v10,
                  (__int64)Handle,
                  (__int64)v8 + 20 * v18,
                  a2,
                  v19,
                  (_OWORD *)*v15 + 3 * *v13);
          if ( v11 < 0 )
            break;
          ++*v13;
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < v24 );
        goto LABEL_14;
      }
    }
LABEL_13:
    v8 = v22;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x58706E50u);
  return (unsigned int)v11;
}
