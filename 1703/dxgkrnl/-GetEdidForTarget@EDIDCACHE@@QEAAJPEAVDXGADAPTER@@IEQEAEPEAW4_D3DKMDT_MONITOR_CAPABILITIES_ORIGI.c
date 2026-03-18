/*
 * XREFs of ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198918
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C01E84F8 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012189C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198C90 (-ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

__int64 __fastcall EDIDCACHE::GetEdidForTarget(
        EDIDCACHE *this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *const a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a6)
{
  unsigned __int8 *v6; // rdi
  char v7; // si
  unsigned int v8; // ebp
  struct DXGFASTMUTEX *v12; // rdx
  __int64 v13; // r9
  unsigned __int8 *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v18; // rdx
  EDIDCACHE *v19; // rcx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v20; // rsi
  unsigned int v21; // ebx
  __int64 v22; // rax
  _BYTE v23[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = a5;
  v7 = a4;
  v8 = a3;
  if ( !a5 )
    return 3221225713LL;
  v12 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( !v12 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, v12, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v14 = *(unsigned __int8 **)((char *)a2 + 268);
  v15 = (_QWORD *)((char *)this + 12);
  a5 = v14;
  LODWORD(v16) = 0;
  v17 = HIDWORD(v14);
  do
  {
    if ( *((_DWORD *)v15 - 1) == (_DWORD)v14 && *v15 == __PAIR64__(v8, HIDWORD(v14)) )
    {
      v22 = (unsigned int)v16;
      v18 = a6;
      *(_OWORD *)v6 = *(_OWORD *)((char *)this + 152 * v22 + 24);
      *((_OWORD *)v6 + 1) = *(_OWORD *)((char *)this + 152 * v22 + 40);
      *((_OWORD *)v6 + 2) = *(_OWORD *)((char *)this + 152 * v22 + 56);
      *((_OWORD *)v6 + 3) = *(_OWORD *)((char *)this + 152 * v22 + 72);
      *((_OWORD *)v6 + 4) = *(_OWORD *)((char *)this + 152 * v22 + 88);
      *((_OWORD *)v6 + 5) = *(_OWORD *)((char *)this + 152 * v22 + 104);
      *((_OWORD *)v6 + 6) = *(_OWORD *)((char *)this + 152 * v22 + 120);
      *((_OWORD *)v6 + 7) = *(_OWORD *)((char *)this + 152 * v22 + 136);
      if ( v18 )
        *v18 = *((enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)this + 38 * v22 + 5);
      goto LABEL_14;
    }
    v16 = (unsigned int)(v16 + 1);
    v15 += 19;
  }
  while ( (unsigned int)v16 < 4 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v16, HIDWORD(a5), v13);
  LODWORD(a5) = -2;
  if ( (int)DmmGetVideoOutputTechnology(a2, v8, &a5, 0LL) >= 0 )
  {
    if ( v7 )
    {
      if ( (_DWORD)a5 == 0x80000000 )
      {
        v20 = a6;
        if ( (int)EDIDCACHE::ReadEdidFromRegistry(v19, v6, a6) >= 0 )
        {
          EDIDCACHE::AddEdid((struct DXGFASTMUTEX **)this, a2, v8, v6, *v20);
LABEL_14:
          v21 = 0;
          goto LABEL_18;
        }
      }
    }
  }
  v21 = -1073741275;
LABEL_18:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, (__int64)v18, v17, v13);
  return v21;
}
