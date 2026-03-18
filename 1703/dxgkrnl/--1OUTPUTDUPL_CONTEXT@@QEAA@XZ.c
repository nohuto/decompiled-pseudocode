/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C01B1718
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C003A60C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C00035B4 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01ABAAC (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01B3CF4 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  void *v6; // rsi
  __int64 v7; // rbp
  _QWORD **v8; // rdi
  __int64 v9; // r14
  _QWORD *v10; // rsi
  AUTOEXPANDALLOCATION *v11; // rcx
  AUTOEXPANDALLOCATION *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  AUTOEXPANDALLOCATION **v22; // rdi
  AUTOEXPANDALLOCATION *v23; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v6 = (void *)*((_QWORD *)this + i + 6);
    if ( v6 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6), a2, a3, a4);
      operator delete(v6);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v7 = 2LL;
  v8 = (_QWORD **)((char *)this + 80);
  v9 = 2LL;
  do
  {
    v10 = *v8;
    if ( *v8 )
    {
      v11 = (AUTOEXPANDALLOCATION *)v10[4];
      if ( v11 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v11);
      v12 = (AUTOEXPANDALLOCATION *)v10[6];
      if ( v12 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v12);
      ExFreePoolWithTag(v10, 0);
    }
    *v8 = 0LL;
    v8 += 12;
    --v9;
  }
  while ( v9 );
  if ( *((_DWORD *)this + 76) )
  {
    v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 73);
    if ( v15 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v16, v17);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v15,
                                         CurrentProcessSessionId,
                                         v19,
                                         v20);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionDataForSpecifiedSession);
    *((_DWORD *)this + 76) = 0;
  }
  v22 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    v23 = *v22;
    if ( *v22 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v23);
      *v22 = 0LL;
    }
    v22 += 12;
    --v7;
  }
  while ( v7 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_p((__int64)v23, &EventOutputDuplicationDestroy, a3, this);
}
