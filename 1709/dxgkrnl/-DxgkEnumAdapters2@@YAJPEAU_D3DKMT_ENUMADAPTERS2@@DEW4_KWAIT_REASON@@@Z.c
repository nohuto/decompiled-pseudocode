/*
 * XREFs of ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E72C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C008B85C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C00E7570 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E761C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters2(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS2 *v7; // rsi
  int v8; // edi
  DXGGLOBAL *Global; // rax
  int MaximumAdapterCount; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _D3DKMT_ENUMADAPTERS2 *v13; // rdx
  void *v14; // rcx
  size_t v15; // r8
  void *v16; // rdx
  DXGGLOBAL *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  DXGGLOBAL *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGPROCESS *i; // rsi
  int v32; // ecx
  void *v33[2]; // [rsp+28h] [rbp-100h] BYREF
  __int64 v34; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-E8h]
  void *Src; // [rsp+48h] [rbp-E0h]
  _QWORD v37[21]; // [rsp+50h] [rbp-D8h] BYREF
  int v38; // [rsp+F8h] [rbp-30h]

  v7 = a1;
  if ( a1 )
  {
    LODWORD(v33[0]) = 0;
    v33[1] = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    Src = 0LL;
    v37[0] = 0LL;
    v38 = 0;
    if ( a2 == 1 )
    {
      if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
      {
        a1 = (struct _D3DKMT_ENUMADAPTERS2 *)MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *(struct _D3DKMT_ENUMADAPTERS2 *)v33 = *v7;
    }
    else
    {
      *(struct _D3DKMT_ENUMADAPTERS2 *)v33 = *a1;
    }
    if ( !v33[1] )
    {
      v8 = 0;
      Global = DXGGLOBAL::GetGlobal((__int64)a1);
      MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
      goto LABEL_9;
    }
    v18 = DXGGLOBAL::GetGlobal((__int64)a1);
    v19 = DXGGLOBAL::GetMaximumAdapterCount(v18);
    v20 = (unsigned int)v33[0];
    if ( v19 < LODWORD(v33[0]) )
    {
      v25 = DXGGLOBAL::GetGlobal(LODWORD(v33[0]));
      v20 = DXGGLOBAL::GetMaximumAdapterCount(v25);
      LODWORD(v33[0]) = v20;
    }
    v21 = 1LL;
    if ( v20 > 1 )
      v21 = v20;
    PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(v37, v21);
    if ( v37[0] )
    {
      Src = (void *)v37[0];
      HIDWORD(v34) = v33[0];
      v8 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v34, a2, a3, a4);
      if ( (unsigned int)v34 > LODWORD(v33[0]) )
      {
        v28 = WdLogNewEntry5_WdAssertion(LODWORD(v33[0]));
        *(_QWORD *)(v28 + 24) = 842LL;
        WdLogEvent5_WdAssertion(v28);
      }
      v12 = HIDWORD(v34);
      if ( (unsigned int)v34 > HIDWORD(v34) )
      {
        v29 = WdLogNewEntry5_WdAssertion(HIDWORD(v34));
        *(_QWORD *)(v29 + 24) = 843LL;
        WdLogEvent5_WdAssertion(v29);
      }
      v23 = v35;
      if ( (unsigned int)v34 > (unsigned int)v35 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v30 + 24) = 844LL;
        WdLogEvent5_WdAssertion(v30);
        v23 = v35;
      }
      if ( v8 < 0 )
        goto LABEL_43;
      if ( HIDWORD(v34) < v23 )
      {
        v8 = -1073741789;
        LODWORD(v33[0]) = 0;
LABEL_10:
        if ( v8 >= 0 )
        {
          if ( a2 == 1 )
          {
            v13 = v7 + 1;
            if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || v13 <= v7 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *v7 = *(struct _D3DKMT_ENUMADAPTERS2 *)v33;
          }
          else
          {
            memmove(v7, v33, 0x10uLL);
          }
          v14 = v33[1];
          if ( v33[1] )
          {
            if ( a2 == 1 )
            {
              v15 = 20LL * (unsigned int)v34;
              v16 = Src;
              if ( (char *)v33[1] + v15 > (void *)MmUserProbeAddress || (char *)v33[1] + v15 <= v33[1] )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v14, v16, v15);
            }
            else
            {
              memmove(v33[1], Src, 20LL * (unsigned int)v34);
            }
          }
          goto LABEL_22;
        }
LABEL_43:
        for ( i = DXGPROCESS::GetCurrent(v12, v11);
              ;
              DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src + 5 * (unsigned int)(v32 - 1))) )
        {
          v32 = v34;
          if ( !(_DWORD)v34 )
            break;
          LODWORD(v34) = v34 - 1;
        }
LABEL_22:
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v37, v13);
        return (unsigned int)v8;
      }
      MaximumAdapterCount = v34;
LABEL_9:
      LODWORD(v33[0]) = MaximumAdapterCount;
      goto LABEL_10;
    }
    v26 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v26);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v37, v27);
    return 3221225495LL;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
}
