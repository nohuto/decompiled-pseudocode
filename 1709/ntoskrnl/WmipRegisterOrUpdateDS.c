/*
 * XREFs of WmipRegisterOrUpdateDS @ 0x140544FA8
 * Callers:
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x14058E000 (WmipRegistrationWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     WmipProcessWmiRegInfo @ 0x140545208 (WmipProcessWmiRegInfo.c)
 */

__int64 __fastcall WmipRegisterOrUpdateDS(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int *PoolWithTag; // rdi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  *((_QWORD *)&v13[0] + 1) = 0LL;
  v5 = 0x2000;
  do
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x44696D57u);
    if ( PoolWithTag )
    {
      LOBYTE(v6) = 11;
      v9 = WmipSendWmiIrp(v6, *(unsigned int *)(a1 + 56), a2 != 0, v5, (__int64)PoolWithTag, v13);
      v11 = v9;
      if ( v9 < 0 )
      {
        if ( v9 == -1073741789 )
          goto LABEL_14;
        LOBYTE(v10) = 8;
        v11 = WmipSendWmiIrp(v10, *(unsigned int *)(a1 + 56), a2 != 0, v5, (__int64)PoolWithTag, v13);
      }
      if ( v11 != -1073741789 )
      {
        v2 = DWORD2(v13[0]);
        if ( *((_QWORD *)&v13[0] + 1) != 4LL )
          continue;
        goto LABEL_15;
      }
LABEL_14:
      v2 = DWORD2(v13[0]);
LABEL_15:
      v5 = *PoolWithTag;
      ExFreePoolWithTag(PoolWithTag, 0);
      v11 = -1073741789;
      continue;
    }
    v11 = -1073741670;
  }
  while ( v11 == -1073741789 );
  if ( v11 >= 0 )
  {
    LOBYTE(v8) = a2;
    v11 = WmipProcessWmiRegInfo(a1, PoolWithTag, v2, v8);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v11;
}
