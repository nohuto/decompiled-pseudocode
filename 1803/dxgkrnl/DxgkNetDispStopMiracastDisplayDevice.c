/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C01681B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002DBC (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C002B6F4 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C003FD18 (DxgkMiracastStopMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r13
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  SIZE_T v19; // rax
  WCHAR *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  size_t v23; // rbx
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Object[1] = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)Handle);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v29 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v12 = RtlStringCchLengthW(a1, 0x208uLL, &v29);
    v16 = v12;
    if ( v12 >= 0 )
    {
      v18 = v29;
      v19 = 2 * (v29 + 1);
      if ( !is_mul_ok(v29 + 1, 2uLL) )
        v19 = -1LL;
      v20 = (WCHAR *)operator new[](v19, 0x4B677844u, PagedPool);
      v4 = v20;
      if ( v20 )
      {
        v23 = v18;
        memmove(v20, a1, v23 * 2);
        v4[v23] = 0;
        if ( Handle
          && (v24 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL),
              v5 = (struct _KEVENT *)Object[0],
              v24 < 0) )
        {
          v10 = -2147483640;
          v26 = WdLogNewEntry5_WdError(v25);
          *(_QWORD *)(v26 + 24) = Handle;
          WdLogEvent5_WdError(v26);
        }
        else
        {
          v10 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v10 = -2147483638;
        v22 = WdLogNewEntry5_WdLowResource(v21);
        *(_QWORD *)(v22 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v22);
      }
    }
    else
    {
      v10 = -2147483640;
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
    }
  }
  else
  {
    v10 = -2147483643;
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v11);
  }
  if ( v4 )
    operator delete[](v4);
  return v10;
}
