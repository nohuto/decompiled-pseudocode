/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D9A60
 * Callers:
 *     sub_1800D9FA0 @ 0x1800D9FA0 (sub_1800D9FA0.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x1800A5D40 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800DBFC0 @ 0x1800DBFC0 (sub_1800DBFC0.c)
 *     sub_1800F8C24 @ 0x1800F8C24 (sub_1800F8C24.c)
 */

__int64 __fastcall RtlSetProcessDebugInformation(HANDLE a1, int a2, __int64 a3)
{
  int InformationThread; // ebx
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned int *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-78h]
  int v11; // [rsp+60h] [rbp-48h]
  __int64 v12; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+20h]

  v14 = -600000000LL;
  InformationThread = 0;
  *(_DWORD *)(a3 + 64) = a2;
  v5 = a2;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
  {
    if ( ((a2 & 1) == 0 || (InformationThread = sub_1800DBFC0(a3)) == 0) && (v5 & 2) != 0 )
    {
      v8 = *(unsigned int **)(a3 + 104);
      if ( v8 )
      {
        v9 = *v8;
        if ( !(_DWORD)v9 && (v8[1] < 0x18 || *((_QWORD *)v8 + 1) || *((_QWORD *)v8 + 2)) )
          return (unsigned int)-1073741811;
        else
          return (unsigned int)sub_1800F8C24(v9, v8[1], v8 + 2);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    v12 = 0LL;
    result = sub_1800686F4((_QWORD *)a3, (__int64)a1, 0, &v12);
    if ( (int)result < 0 )
      return result;
    v7 = *(_QWORD *)(a3 + 72);
    if ( v7 > 0xD0 )
      memmove((void *)(*(_QWORD *)(a3 + 88) + a3 + 208), (const void *)(a3 + 208), v7 - 208);
    InformationThread = sub_180052D68(
                          v12,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v10,
                          (__int64)sub_1800D9FA0,
                          *(_QWORD *)(a3 + 16),
                          &v13,
                          0LL);
    if ( InformationThread >= 0 )
    {
      InformationThread = ZwResumeThread();
      if ( InformationThread < 0 || (InformationThread = ZwWaitForSingleObject(), InformationThread < 0) )
      {
        ZwTerminateThread();
      }
      else
      {
        InformationThread = ZwQueryInformationThread();
        if ( InformationThread >= 0 )
          InformationThread = v11;
      }
      ZwClose();
    }
    ZwClose();
  }
  return (unsigned int)InformationThread;
}
