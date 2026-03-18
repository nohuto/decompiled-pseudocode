/*
 * XREFs of CmpFreeAllMemory @ 0x140662C0C
 * Callers:
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpDumpKeyBodyList @ 0x140665BB0 (CmpDumpKeyBodyList.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // esi
  char v1; // r14
  __int64 *NextActiveHive; // rbx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  __int64 v7; // r15
  __int64 i; // rbp
  char v9; // al
  _QWORD *v10; // rcx
  _QWORD *j; // rdx
  char v12; // al
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  CmpRunDownDelayDerefKCBEngine(0LL, 1);
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v3 = *((_DWORD *)NextActiveHive + 702);
      v4 = 0;
      v5 = NextActiveHive[350];
      v13 = 0;
      if ( v3 > 0 )
      {
        v6 = (__int64 *)(v5 + 16);
        v7 = (unsigned int)v3;
        do
        {
          for ( i = *v6; i; i = *(_QWORD *)(i + 8) )
          {
            v9 = v1;
            if ( !v1 )
              v9 = 1;
            v1 = v9;
            CmpDumpKeyBodyList(i - 8, &v13);
          }
          v6 += 3;
          --v7;
        }
        while ( v7 );
        v4 = v13;
      }
      v10 = (_QWORD *)NextActiveHive[339];
      v0 += v4;
      v1 = 0;
      while ( v10 )
      {
        for ( j = (_QWORD *)v10[2]; j != v10 + 2; j = (_QWORD *)*j )
        {
          if ( j[6] )
          {
            v12 = v1;
            if ( !v1 )
              v12 = 1;
            v1 = v12;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      CmpDestroySecurityCache((__int64)NextActiveHive);
      HvFreeHive((__int64)NextActiveHive, 1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)NextActiveHive + 1374, 0xFFFFFFFF) == 1 )
        CmpDeleteHive((__int64)NextActiveHive);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
  if ( CmpLockTable )
    ExFreePoolWithTag(CmpLockTable, 0x744C4D43u);
}
