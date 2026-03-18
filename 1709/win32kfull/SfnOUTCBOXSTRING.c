/*
 * XREFs of SfnOUTCBOXSTRING @ 0x1C00DCB00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ClientGetListboxString @ 0x1C00DDC8C (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTCBOXSTRING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v10; // r15d
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  __int64 ThreadWin32Thread; // rax
  unsigned int ListboxString; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF

  v10 = a2;
  if ( a1 )
    v12 = *(_QWORD *)a1;
  else
    v12 = 0LL;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(v12, a2, a3, a4);
  if ( result )
  {
    v17 = *(_DWORD *)(a1 + 68);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
    v22[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v22;
    v22[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    ListboxString = ClientGetListboxString(
                      a1,
                      v10,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      ((v17 & 0x200) == 0) & (unsigned __int8)((v17 & 0x30) != 0),
                      a8);
    ThreadUnlock1(v21, v20);
    return ListboxString;
  }
  return result;
}
