/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C017CE50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00048CC (RtlStringCchLengthW.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0024F18 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C004112C (DxgkMiracastStopMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(const wchar_t *Src, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r13
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // rax
  size_t v20; // rbx
  SIZE_T v21; // rax
  WCHAR *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  size_t v25; // rbx
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Object[1] = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)Src);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    pcchLength = 520LL;
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v13 = RtlStringCchLengthW(Src, 0x208uLL, &pcchLength);
    v18 = v13;
    if ( v13 >= 0 )
    {
      v20 = pcchLength;
      v21 = 2 * (pcchLength + 1);
      if ( !is_mul_ok(pcchLength + 1, 2uLL) )
        v21 = -1LL;
      v22 = (WCHAR *)operator new(v21, 0x4B677844u, PagedPool);
      v4 = v22;
      if ( v22 )
      {
        v25 = v20;
        memmove(v22, Src, v25 * 2);
        v4[v25] = 0;
        if ( Handle
          && (v26 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL),
              v5 = (struct _KEVENT *)Object[0],
              v26 < 0) )
        {
          v11 = -2147483640;
          v29 = WdLogNewEntry5_WdError(v28, v27);
          *(_QWORD *)(v29 + 24) = Handle;
          WdLogEvent5_WdError(v29);
        }
        else
        {
          v11 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v11 = -2147483638;
        v24 = WdLogNewEntry5_WdLowResource(v23);
        *(_QWORD *)(v24 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v24);
      }
    }
    else
    {
      v11 = -2147483640;
      v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      *(_QWORD *)(v19 + 24) = v18;
      WdLogEvent5_WdWarning(v19);
    }
  }
  else
  {
    v11 = -2147483643;
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v12);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v11;
}
