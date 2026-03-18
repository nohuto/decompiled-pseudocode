/*
 * XREFs of ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01E783C
 * Callers:
 *     NtDxgkVailConnect @ 0x1C01E8CF0 (NtDxgkVailConnect.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C01E6A58 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailGuestConnect(DXGSESSIONDATA *this)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const struct _GUID *v6; // r8
  DXGVAILGUESTOBJECT *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v2) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGSESSIONDATA *)((char *)this + 18688), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( *((_QWORD *)this + 2342) )
  {
    ++*((_DWORD *)this + 4682);
  }
  else
  {
    v3 = (struct _EX_RUNDOWN_REF *)operator new(0x58uLL, 0x4B677844u, 1, PagedPool);
    v7 = (DXGVAILGUESTOBJECT *)v3;
    if ( v3 )
    {
      v3->Count = (ULONG_PTR)this;
      LODWORD(v3[1].Count) = 1;
      v3[2].Count = 0LL;
      v3[3].Count = 0LL;
      LODWORD(v3[5].Count) = 0;
      HIDWORD(v3[5].Ptr) = -1;
      v3[4].Count = 0LL;
      LODWORD(v3[6].Count) = 25;
      v3[8].Count = 0LL;
      v3[9].Count = 0LL;
      v3[10].Count = 0LL;
      ExInitializeRundownProtection(v3 + 7);
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 2342) = v7;
    if ( v7 )
    {
      v8 = DXGVAILGUESTOBJECT::Initialize(v7, v4, v6);
      v2 = v8;
      if ( v8 >= 0 )
      {
        *((_DWORD *)this + 4682) = 1;
      }
      else
      {
        v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v12 + 24) = v2;
        WdLogEvent5_WdWarning(v12);
        DXGVAILGUESTOBJECT::ReleaseReference(*((DXGVAILGUESTOBJECT **)this + 2342));
        *((_QWORD *)this + 2342) = 0LL;
      }
    }
    else
    {
      LODWORD(v2) = -1073741801;
      v13 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdWarning(v13);
    }
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v2;
}
