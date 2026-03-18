/*
 * XREFs of ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D3F50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C00D41C0 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D4274 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00F9DEC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
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
  unsigned int MaximumAdapterCount; // eax
  void *v11; // rcx
  size_t v12; // r8
  void *v13; // rdx
  DXGGLOBAL *v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rax
  DXGGLOBAL *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct _KTHREAD **i; // rsi
  int v29; // ecx
  void *v30[2]; // [rsp+28h] [rbp-100h] BYREF
  __int64 v31; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-E8h]
  void *Src; // [rsp+48h] [rbp-E0h]
  _QWORD v34[21]; // [rsp+50h] [rbp-D8h] BYREF
  int v35; // [rsp+F8h] [rbp-30h]

  v7 = a1;
  if ( a1 )
  {
    v30[0] = 0LL;
    v30[1] = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    Src = 0LL;
    v34[0] = 0LL;
    v35 = 0;
    if ( a2 == 1 )
    {
      if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
      {
        a1 = (struct _D3DKMT_ENUMADAPTERS2 *)MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *(struct _D3DKMT_ENUMADAPTERS2 *)v30 = *v7;
    }
    else
    {
      *(struct _D3DKMT_ENUMADAPTERS2 *)v30 = *a1;
    }
    if ( !v30[1] )
    {
      v8 = 0;
      Global = DXGGLOBAL::GetGlobal((__int64)a1);
      MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
      goto LABEL_9;
    }
    v15 = DXGGLOBAL::GetGlobal((__int64)a1);
    v16 = DXGGLOBAL::GetMaximumAdapterCount(v15);
    v17 = (unsigned int)v30[0];
    if ( v16 < LODWORD(v30[0]) )
    {
      v23 = DXGGLOBAL::GetGlobal(LODWORD(v30[0]));
      v17 = DXGGLOBAL::GetMaximumAdapterCount(v23);
      LODWORD(v30[0]) = v17;
    }
    v18 = 1LL;
    if ( v17 > 1 )
      v18 = v17;
    PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(v34, v18);
    if ( v34[0] )
    {
      Src = (void *)v34[0];
      HIDWORD(v31) = v30[0];
      v8 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v31, a2, a3, a4);
      if ( (unsigned int)v31 > LODWORD(v30[0]) )
      {
        v25 = WdLogNewEntry5_WdAssertion(LODWORD(v30[0]));
        *(_QWORD *)(v25 + 24) = 874LL;
        WdLogEvent5_WdAssertion(v25);
      }
      v20 = HIDWORD(v31);
      if ( (unsigned int)v31 > HIDWORD(v31) )
      {
        v26 = WdLogNewEntry5_WdAssertion(HIDWORD(v31));
        *(_QWORD *)(v26 + 24) = 875LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v21 = v32;
      if ( (unsigned int)v31 > (unsigned int)v32 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v27 + 24) = 876LL;
        WdLogEvent5_WdAssertion(v27);
        v21 = v32;
      }
      if ( v8 < 0 )
        goto LABEL_43;
      if ( HIDWORD(v31) < v21 )
      {
        v8 = -1073741789;
        LODWORD(v30[0]) = 0;
LABEL_10:
        if ( v8 >= 0 )
        {
          if ( a2 == 1 )
          {
            if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *v7 = *(struct _D3DKMT_ENUMADAPTERS2 *)v30;
          }
          else
          {
            memmove(v7, v30, 0x10uLL);
          }
          v11 = v30[1];
          if ( v30[1] )
          {
            if ( a2 == 1 )
            {
              v12 = 20LL * (unsigned int)v31;
              v13 = Src;
              if ( (char *)v30[1] + v12 > (void *)MmUserProbeAddress || (char *)v30[1] + v12 <= v30[1] )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v11, v13, v12);
            }
            else
            {
              memmove(v30[1], Src, 20LL * (unsigned int)v31);
            }
          }
          goto LABEL_22;
        }
LABEL_43:
        for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
              ;
              DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src + 5 * (unsigned int)(v29 - 1))) )
        {
          v29 = v31;
          if ( !(_DWORD)v31 )
            break;
          LODWORD(v31) = v31 - 1;
        }
LABEL_22:
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v34);
        return (unsigned int)v8;
      }
      MaximumAdapterCount = v31;
LABEL_9:
      LODWORD(v30[0]) = MaximumAdapterCount;
      goto LABEL_10;
    }
    v24 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v24);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v34);
    return 3221225495LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
}
