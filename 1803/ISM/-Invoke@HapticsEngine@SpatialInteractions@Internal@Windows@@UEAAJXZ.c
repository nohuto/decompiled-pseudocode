/*
 * XREFs of ?Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D54E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x1800D568C (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::Invoke(
        Windows::Internal::SpatialInteractions::HapticsEngine *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  Windows::Internal::SpatialInteractions::HapticsEngine *v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rbp
  double v10; // xmm6_8
  double v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  double v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !*((_BYTE *)this + 223) )
    goto LABEL_18;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), &v17);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_BYTE *)this + 221) )
    {
      v6 = v17;
      v7 = (Windows::Internal::SpatialInteractions::HapticsEngine *)((char *)this - 8);
      goto LABEL_17;
    }
    v8 = (__int64 *)*((_QWORD *)this + 13);
    v9 = *((_QWORD *)this + 23);
    v10 = 0.0;
    *((_QWORD *)this + 23) = 0LL;
    if ( !*((_BYTE *)v8 + 40) )
    {
LABEL_16:
      *((double *)v8 + 3) = v10;
      v7 = (Windows::Internal::SpatialInteractions::HapticsEngine *)((char *)this - 8);
      v6 = v17;
      if ( *((_QWORD *)this + 23) )
      {
        Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(v7, v10, v17);
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 64LL))(
               *((_QWORD *)this + 14),
               *((_QWORD *)this + 23));
        v4 = v3;
        if ( v3 < 0 )
        {
          v5 = 653LL;
          goto LABEL_24;
        }
LABEL_18:
        v4 = 0;
        goto LABEL_19;
      }
LABEL_17:
      Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(v7, 0.0, v6);
      goto LABEL_18;
    }
    v11 = *(double *)v8;
    v16 = 0.0;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, double *))(*(_QWORD *)&v11 + 24LL))(v8, v9, &v16);
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v8 + 32))(v8, v9, 0LL);
      if ( v12 >= 0 )
      {
        if ( v16 < 0.001 )
        {
          *((_BYTE *)v8 + 40) = 0;
          goto LABEL_16;
        }
        v10 = v16;
        goto LABEL_15;
      }
      v13 = 142LL;
    }
    else
    {
      v13 = 141LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v12);
    v10 = *((double *)v8 + 3);
LABEL_15:
    *((_QWORD *)this + 23) = v8[1] + v8[2];
    goto LABEL_16;
  }
  v5 = 631LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
    (const char *)(unsigned int)v3);
LABEL_19:
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
