/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C017CA60
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00048CC (RtlStringCchLengthW.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0024F18 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C01C8CE4 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(const wchar_t *Src, _DWORD *a2)
{
  char *v4; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  size_t v18; // rbx
  SIZE_T v19; // rax
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  size_t v23; // rbx
  int v25; // [rsp+20h] [rbp-38h] BYREF
  char *v26; // [rsp+28h] [rbp-30h]
  size_t pcchLength[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v28; // [rsp+70h] [rbp+18h] BYREF
  int v29; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v26 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)Src);
  v29 = DxgkNetDispAccessCheck(Current);
  if ( v29 >= 0 )
  {
    pcchLength[0] = 520LL;
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v11 = RtlStringCchLengthW(Src, 0x208uLL, pcchLength);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v18 = pcchLength[0];
      v19 = 2 * (pcchLength[0] + 1);
      if ( !is_mul_ok(pcchLength[0] + 1, 2uLL) )
        v19 = -1LL;
      v20 = (char *)operator new(v19, 0x4B677844u, PagedPool);
      v4 = v20;
      v26 = v20;
      if ( v20 )
      {
        v23 = 2 * v18;
        memmove(v20, Src, v23);
        *(_WORD *)&v4[v23] = 0;
        v29 = DxgkMiracastQueryMiracastStatus(v4, &v25, &v28);
        if ( v29 >= 0 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (_DWORD *)MmUserProbeAddress;
          *a2 = v25;
        }
      }
      else
      {
        v28 = -2147483638;
        v22 = WdLogNewEntry5_WdLowResource(v21);
        *(_QWORD *)(v22 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v22);
      }
    }
    else
    {
      v28 = -2147483640;
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
    }
  }
  else
  {
    v28 = -2147483643;
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v10);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v28;
}
