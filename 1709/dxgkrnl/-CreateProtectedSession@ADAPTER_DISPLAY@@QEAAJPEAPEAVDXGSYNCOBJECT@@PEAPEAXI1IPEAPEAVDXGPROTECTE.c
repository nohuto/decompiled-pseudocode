/*
 * XREFs of ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BBAC8
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C01BC230 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C0029638 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0029734 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C01BBE74 (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateProtectedSession(
        DXGADAPTER **this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        unsigned int a4,
        void **a5,
        unsigned int a6,
        struct DXGPROTECTEDSESSION **a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  DXGPROTECTEDSESSION *v14; // rax
  __int64 v15; // rcx
  DXGPROTECTEDSESSION *v16; // rbx
  __int64 v17; // rax
  int v19; // ebp
  DXGPROTECTEDSESSION **v20; // rax
  DXGADAPTER *v21; // rcx
  _BYTE v22[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 852LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a7 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 854LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *a7 = 0LL;
  v14 = (DXGPROTECTEDSESSION *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x90uLL);
  v16 = v14;
  if ( v14 )
  {
    *((_QWORD *)v14 + 2) = this;
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_DWORD *)v14 + 6) = 0;
    *((_DWORD *)v14 + 15) = -1;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_QWORD *)v14 + 5) = 0LL;
    *((_DWORD *)v14 + 14) = 0;
    *((_DWORD *)v14 + 16) = 32;
    *((_QWORD *)v14 + 6) = 0LL;
    *((_DWORD *)v14 + 18) = 0;
    *((_QWORD *)v14 + 10) = 0LL;
    *((_DWORD *)v14 + 22) = 0;
    *((_QWORD *)v14 + 12) = 0LL;
    *((_DWORD *)v14 + 26) = 0;
    *((_QWORD *)v14 + 14) = 0LL;
    *((_QWORD *)v14 + 15) = 0LL;
    *((_DWORD *)v14 + 32) = 1;
    *((_QWORD *)v14 + 17) = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v19 = DXGPROTECTEDSESSION::Initialize(v16, a2, a3, a4, a5, a6);
    if ( v19 >= 0 )
    {
      DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        (DXGPROTECTEDSESSIONMUTEX *)v22,
        (struct ADAPTER_DISPLAY *)this);
      v20 = this + 60;
      v21 = this[60];
      if ( *((DXGADAPTER ***)v21 + 1) != this + 60 )
        __fastfail(3u);
      *(_QWORD *)v16 = v21;
      *((_QWORD *)v16 + 1) = v20;
      *((_QWORD *)v21 + 1) = v16;
      *v20 = v16;
      if ( v22[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
      _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
      *a7 = v16;
      return 0LL;
    }
    else
    {
      DXGPROTECTEDSESSION::`scalar deleting destructor'((struct DXGSYNCOBJECT **)v16);
      return (unsigned int)v19;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
