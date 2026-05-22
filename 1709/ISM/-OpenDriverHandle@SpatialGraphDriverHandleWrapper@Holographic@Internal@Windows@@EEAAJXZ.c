/*
 * XREFs of ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x1800B75B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B1500 (-StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRA.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800B3EC0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 *     ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B7CD0 (-SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAE.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::OpenDriverHandle(
        struct _RTL_CRITICAL_SECTION *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD *p_Type; // rax
  _QWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    EnterCriticalSection(this + 3);
    p_Type = &this[4].DebugInfo->Type;
    v6 = (_QWORD *)*p_Type;
    if ( (_QWORD *)*p_Type == p_Type )
    {
LABEL_18:
      v8 = 0;
    }
    else
    {
      while ( 1 )
      {
        v7 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SendTrackingStateToDriver(
               this,
               (char *)v6 + 28,
               *((unsigned int *)v6 + 13));
        v8 = v7;
        if ( v7 < 0 )
          break;
        v9 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v9 && *v9 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::StartTracking_(
            v10,
            (__int64)&this->RecursionCount,
            (__int64)v6 + 28,
            *((_DWORD *)v6 + 13));
        }
        if ( !*((_BYTE *)v6 + 25) )
        {
          v11 = (__int64 *)v6[2];
          if ( *((_BYTE *)v11 + 25) )
          {
            for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
              v6 = (_QWORD *)i;
            v6 = (_QWORD *)i;
          }
          else
          {
            do
            {
              v6 = v11;
              v11 = (__int64 *)*v11;
            }
            while ( !*((_BYTE *)v11 + 25) );
          }
        }
        if ( v6 == (_QWORD *)this[4].DebugInfo )
          goto LABEL_18;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x414,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v7);
    }
    if ( this != (struct _RTL_CRITICAL_SECTION *)-120LL )
      LeaveCriticalSection(this + 3);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x401,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
