/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C0180420
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C000BCF8 (RtlStringCchLengthW.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C00234D4 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C01E2E28 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(const wchar_t *Src, __int64 a2)
{
  _DWORD *v2; // r15
  char *v4; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // rbx
  SIZE_T v17; // rax
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  size_t v21; // rbx
  int v23; // [rsp+20h] [rbp-38h] BYREF
  char *v24; // [rsp+28h] [rbp-30h]
  size_t pcchLength[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+70h] [rbp+18h] BYREF
  int v27; // [rsp+78h] [rbp+20h]

  v2 = (_DWORD *)a2;
  v4 = 0LL;
  v24 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)Src, a2);
  v27 = DxgkNetDispAccessCheck(Current);
  if ( v27 >= 0 )
  {
    pcchLength[0] = 520LL;
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v10 = RtlStringCchLengthW(Src, 0x208uLL, pcchLength);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v16 = pcchLength[0];
      v17 = 2 * (pcchLength[0] + 1);
      if ( !is_mul_ok(pcchLength[0] + 1, 2uLL) )
        v17 = -1LL;
      v18 = (char *)operator new(v17, 0x4B677844u, PagedPool);
      v4 = v18;
      v24 = v18;
      if ( v18 )
      {
        v21 = 2 * v16;
        memmove(v18, Src, v21);
        *(_WORD *)&v4[v21] = 0;
        v27 = DxgkMiracastQueryMiracastStatus(v4, &v23, &v26);
        if ( v27 >= 0 )
        {
          if ( (unsigned __int64)v2 >= MmUserProbeAddress )
            v2 = (_DWORD *)MmUserProbeAddress;
          *v2 = v23;
        }
      }
      else
      {
        v26 = -2147483638;
        v20 = WdLogNewEntry5_WdLowResource(v19);
        *(_QWORD *)(v20 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v20);
      }
    }
    else
    {
      v26 = -2147483640;
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdWarning(v15);
    }
  }
  else
  {
    v26 = -2147483643;
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v9);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v26;
}
