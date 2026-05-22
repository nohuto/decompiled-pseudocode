/*
 * XREFs of ?OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x1800C6FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BCA38 (-StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRA.c)
 *     ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C76FC (-SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAE.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::OnDriverHandleOpened(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  _QWORD *v3; // rax
  _QWORD *j; // rbx
  int v5; // eax
  unsigned int v6; // edi
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 *v10; // rcx
  __int64 i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v3 = (_QWORD *)*((_QWORD *)this + 26);
  j = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
  {
LABEL_17:
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SendTrackingStateToDriver(
             this,
             (char *)j + 28,
             *((unsigned int *)j + 13));
      v6 = v5;
      if ( v5 < 0 )
        break;
      v7 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( v7 && *v7 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::StartTracking_(v8, (__int64)this + 12, (__int64)j + 28, *((_DWORD *)j + 13));
      }
      if ( !*((_BYTE *)j + 25) )
      {
        v9 = (__int64 **)j[2];
        if ( *((_BYTE *)v9 + 25) )
        {
          for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            j = (_QWORD *)i;
          j = (_QWORD *)i;
        }
        else
        {
          v10 = *v9;
          for ( j = (_QWORD *)j[2]; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
            j = v10;
        }
      }
      if ( j == *((_QWORD **)this + 26) )
        goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E2,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v6;
}
