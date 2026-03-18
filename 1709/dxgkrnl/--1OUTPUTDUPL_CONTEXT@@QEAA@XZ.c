/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C01CB4D8
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C002AAE8 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000F4D8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     McTemplateK0p @ 0x1C00204D4 (McTemplateK0p.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01C54D4 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01CDAAC (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  void *v5; // rsi
  __int64 v6; // rbp
  _QWORD **v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rsi
  AUTOEXPANDALLOCATION *v10; // rcx
  AUTOEXPANDALLOCATION *v11; // rcx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  AUTOEXPANDALLOCATION **v17; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v5 = (void *)*((_QWORD *)this + i + 6);
    if ( v5 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6));
      operator delete(v5);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v6 = 2LL;
  v7 = (_QWORD **)((char *)this + 80);
  v8 = 2LL;
  do
  {
    v9 = *v7;
    if ( *v7 )
    {
      v10 = (AUTOEXPANDALLOCATION *)v9[4];
      if ( v10 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v10);
      v11 = (AUTOEXPANDALLOCATION *)v9[6];
      if ( v11 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v11);
      ExFreePoolWithTag(v9, 0);
    }
    *v7 = 0LL;
    v7 += 12;
    --v8;
  }
  while ( v8 );
  if ( *((_DWORD *)this + 76) )
  {
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v13,
                                         CurrentProcessSessionId,
                                         v15);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionDataForSpecifiedSession);
    *((_DWORD *)this + 76) = 0;
  }
  v17 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    if ( *v17 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(*v17);
      *v17 = 0LL;
    }
    v17 += 12;
    --v6;
  }
  while ( v6 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p(&DxgkControlGuid_Context, &EventOutputDuplicationDestroy, a3, this);
}
