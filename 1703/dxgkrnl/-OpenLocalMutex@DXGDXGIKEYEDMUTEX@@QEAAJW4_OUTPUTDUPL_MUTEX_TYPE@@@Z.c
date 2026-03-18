/*
 * XREFs of ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ADD08
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADAB8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01B236C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01B2D78 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01B2E40 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01A6034 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenLocalMutex(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned int *v7; // rsi
  DXGGLOBAL *v8; // rcx
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rax

  v5 = (int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 11000);
  DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  v6 = 3 * v5;
  v7 = &a1[2 * v6];
  v10 = DXGGLOBAL::OpenKeyedMutex(v8, *a1, (struct DXGKEYEDMUTEX **)&a1[2 * v6 + 8], v7 + 6, 0LL, 0);
  if ( v10 >= 0 )
  {
    *(_QWORD *)&a1[2 * v6 + 10] = PsGetCurrentProcess(v9);
    v12 = v7[6];
    Current = DXGPROCESS::GetCurrent(v13);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
    v15 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)Current + 52) )
    {
      v16 = *((_QWORD *)Current + 24);
      v17 = v15;
      v18 = ((unsigned int)v12 >> 26) & 0x30;
      v19 = *(unsigned int *)(v16 + 16 * v17 + 8);
      if ( (((unsigned int)v12 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16 * v17 + 8) & 0x30) && (v19 & 0xF) != 0 )
      {
        v20 = 2 * ((v12 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v16 + 8 * v20 + 8) & 0x1000) == 0 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v18, v19, v16, 0xFFFFFFLL);
          *(_QWORD *)(v21 + 24) = 190LL;
          WdLogEvent5_WdAssertion(v21);
        }
        *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v20 + 8) &= ~0x1000u;
      }
    }
    *((_QWORD *)Current + 22) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v11, 11000);
  return (unsigned int)v10;
}
