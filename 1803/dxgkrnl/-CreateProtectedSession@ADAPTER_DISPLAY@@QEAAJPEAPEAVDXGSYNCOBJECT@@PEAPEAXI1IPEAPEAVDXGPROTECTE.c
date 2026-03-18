/*
 * XREFs of ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BA598
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C01BAD20 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0019E50 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C003467C (--0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C00346F8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C003481C (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C01BA90C (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
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
  bool v22; // zf
  _BYTE v23[40]; // [rsp+30h] [rbp-28h] BYREF

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
  v14 = (DXGPROTECTEDSESSION *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x98uLL);
  if ( v14 )
    v16 = DXGPROTECTEDSESSION::DXGPROTECTEDSESSION(v14, (struct ADAPTER_DISPLAY *)this);
  else
    v16 = 0LL;
  if ( v16 )
  {
    v19 = DXGPROTECTEDSESSION::Initialize(v16, a2, a3, a4, a5, a6);
    if ( v19 >= 0 )
    {
      DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        (DXGPROTECTEDSESSIONMUTEX *)v23,
        (struct ADAPTER_DISPLAY *)this);
      v20 = this + 60;
      v21 = this[60];
      if ( *((DXGADAPTER ***)v21 + 1) != this + 60 )
        __fastfail(3u);
      *(_QWORD *)v16 = v21;
      *((_QWORD *)v16 + 1) = v20;
      *((_QWORD *)v21 + 1) = v16;
      v22 = v23[8] == 0;
      *v20 = v16;
      if ( !v22 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
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
