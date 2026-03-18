/*
 * XREFs of HvpViewMapStart @ 0x140496E94
 * Callers:
 *     HvLoadHive @ 0x140496B18 (HvLoadHive.c)
 *     HvHiveStartEmptyClone @ 0x1406F7D48 (HvHiveStartEmptyClone.c)
 * Callees:
 *     CmSiGetSectionLength @ 0x140006D1C (CmSiGetSectionLength.c)
 *     CmSiCreateSectionForFile @ 0x140006D58 (CmSiCreateSectionForFile.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140496F3C (HvpViewMapCreateViewsForRegion.c)
 */

NTSTATUS __fastcall HvpViewMapStart(__int64 a1, void *a2, int a3, __int64 a4, int a5)
{
  char v5; // al
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 24) = a4;
  result = CmSiCreateSectionForFile((HANDLE *)a1, (v5 & 1) != 0 ? 5 : 23, 2 * !(v5 & 1) + 2, a4, a2);
  if ( result >= 0 )
  {
    result = CmSiGetSectionLength(*(void **)a1, &v10);
    if ( result >= 0 )
    {
      v9 = v10;
      *(_QWORD *)(a1 + 16) = v10;
      if ( v9 < 4096 )
      {
        return -1073741492;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = (unsigned int)(a3 + 4096);
        result = HvpViewMapCreateViewsForRegion(a1);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
