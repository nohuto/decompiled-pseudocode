/*
 * XREFs of ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0097CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C0097F60 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009800C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00D7990 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DxgkEnumAdapters2(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        __int64 a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  char v6; // r14
  struct _D3DKMT_ENUMADAPTERS2 *v8; // rcx
  int v9; // edi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  struct _D3DKMT_ENUMADAPTERS2 *v12; // rdx
  void *v13; // rcx
  size_t v14; // r8
  void *v15; // rdx
  DXGGLOBAL *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  DXGGLOBAL *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct DXGPROCESS *i; // rsi
  int v36; // ecx
  void *v37[2]; // [rsp+28h] [rbp-100h] BYREF
  __int64 v38; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-E8h]
  void *Src; // [rsp+48h] [rbp-E0h]
  _QWORD v41[21]; // [rsp+50h] [rbp-D8h] BYREF
  int v42; // [rsp+F8h] [rbp-30h]

  v6 = a2;
  if ( a1 )
  {
    LODWORD(v37[0]) = 0;
    v37[1] = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    Src = 0LL;
    v41[0] = 0LL;
    v42 = 0;
    if ( (_BYTE)a2 == 1 )
    {
      v8 = a1 + 1;
      if ( v8 < a1 || (unsigned __int64)v8 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(struct _D3DKMT_ENUMADAPTERS2 *)v37 = *a1;
    }
    else
    {
      *(struct _D3DKMT_ENUMADAPTERS2 *)v37 = *a1;
    }
    if ( !v37[1] )
    {
      v9 = 0;
      Global = DXGGLOBAL::GetGlobal();
      MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
      goto LABEL_9;
    }
    v17 = DXGGLOBAL::GetGlobal();
    v18 = DXGGLOBAL::GetMaximumAdapterCount(v17);
    v19 = (unsigned int)v37[0];
    if ( v18 < LODWORD(v37[0]) )
    {
      v29 = DXGGLOBAL::GetGlobal();
      v19 = DXGGLOBAL::GetMaximumAdapterCount(v29);
      LODWORD(v37[0]) = v19;
    }
    v20 = 1LL;
    if ( v19 > 1 )
      v20 = v19;
    PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(v41, v20);
    if ( v41[0] )
    {
      Src = (void *)v41[0];
      HIDWORD(v38) = v37[0];
      v9 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v38, v6, a3, a4);
      if ( (unsigned int)v38 > LODWORD(v37[0]) )
      {
        v32 = WdLogNewEntry5_WdAssertion(LODWORD(v37[0]), v23, v24, v25);
        *(_QWORD *)(v32 + 24) = 842LL;
        WdLogEvent5_WdAssertion(v32);
      }
      v26 = HIDWORD(v38);
      if ( (unsigned int)v38 > HIDWORD(v38) )
      {
        v33 = WdLogNewEntry5_WdAssertion(HIDWORD(v38), v23, v24, v25);
        *(_QWORD *)(v33 + 24) = 843LL;
        WdLogEvent5_WdAssertion(v33);
      }
      v27 = v39;
      if ( (unsigned int)v38 > (unsigned int)v39 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v26, v23, v24, v25);
        *(_QWORD *)(v34 + 24) = 844LL;
        WdLogEvent5_WdAssertion(v34);
        v27 = v39;
      }
      if ( v9 < 0 )
        goto LABEL_43;
      if ( HIDWORD(v38) < v27 )
      {
        v9 = -1073741789;
        LODWORD(v37[0]) = 0;
LABEL_10:
        if ( v9 >= 0 )
        {
          if ( v6 == 1 )
          {
            v12 = a1 + 1;
            if ( (unsigned __int64)&a1[1] > MmUserProbeAddress || v12 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a1 = *(struct _D3DKMT_ENUMADAPTERS2 *)v37;
          }
          else
          {
            memmove(a1, v37, 0x10uLL);
          }
          v13 = v37[1];
          if ( v37[1] )
          {
            if ( v6 == 1 )
            {
              v14 = 20LL * (unsigned int)v38;
              v15 = Src;
              if ( (char *)v37[1] + v14 > (void *)MmUserProbeAddress || (char *)v37[1] + v14 <= v37[1] )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v13, v15, v14);
            }
            else
            {
              memmove(v37[1], Src, 20LL * (unsigned int)v38);
            }
          }
          goto LABEL_22;
        }
LABEL_43:
        for ( i = DXGPROCESS::GetCurrent(); ; DXGADAPTER::DestroyHandle(
                                                i,
                                                *((_DWORD *)Src + 5 * (unsigned int)(v36 - 1))) )
        {
          v36 = v38;
          if ( !(_DWORD)v38 )
            break;
          LODWORD(v38) = v38 - 1;
        }
LABEL_22:
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v41, v12);
        return (unsigned int)v9;
      }
      MaximumAdapterCount = v38;
LABEL_9:
      LODWORD(v37[0]) = MaximumAdapterCount;
      goto LABEL_10;
    }
    v30 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v30);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v41, v31);
    return 3221225495LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
}
