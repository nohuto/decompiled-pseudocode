/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C000A28C
 * Callers:
 *     rimCompleteReads @ 0x1C0009CF4 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C010B940 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C009C094 (rimFreeAutoRepeatCompleteFrame.c)
 *     WPP_RECORDER_SF_qi @ 0x1C010B874 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C010BA6C (rimDispatchCompleteFrame.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 **v3; // rbx
  __int64 *v5; // rbp
  __int64 *v6; // rax
  __int64 *v7; // rbp
  int v8; // r12d
  _QWORD *v9; // r14
  __int64 *v10; // r15
  int v11; // eax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v3 = (__int64 **)(a1 + 680);
  if ( *v3 == (__int64 *)v3 || !*(_BYTE *)(a1 + 712) )
    return;
  if ( !*(_QWORD *)(a1 + 768) && !*(_DWORD *)(a1 + 976) )
  {
    v5 = *v3;
    if ( (__int64 **)(*v3)[1] != v3 || (v6 = (__int64 *)*v5, *(__int64 **)(*v5 + 8) != v5) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = (__int64)v3;
    v7 = v5 - 1;
    v7[2] = (__int64)(v7 + 1);
    v7[1] = (__int64)(v7 + 1);
    LOBYTE(a3) = *((_DWORD *)v7 + 12) == 0;
    v8 = RawInputManagerDeviceObjectResolveHandle(v7[4], 3LL, a3, &Object);
    goto LABEL_9;
  }
  v10 = *v3;
  if ( *v3 == (__int64 *)v3 )
  {
    v7 = (__int64 *)Object;
    v8 = (int)Object;
LABEL_9:
    v9 = Object;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v7 = v10 - 1;
    LOBYTE(a3) = *((_DWORD *)v10 + 10) == 0;
    v11 = RawInputManagerDeviceObjectResolveHandle(v10[3], 3LL, a3, &Object);
    v9 = Object;
    v8 = v11;
    if ( v11 >= 0 )
      break;
LABEL_19:
    v10 = (__int64 *)*v10;
    if ( v10 == (__int64 *)v3 )
      goto LABEL_10;
  }
  v12 = *((_DWORD *)Object + 62);
  if ( (v12 & 0x1000) != 0 && (v12 & 0x200000) == 0 )
  {
    v8 = -1073741823;
    ObfDereferenceObject(Object);
    goto LABEL_19;
  }
  v13 = (__int64 *)*v10;
  if ( *(__int64 **)(*v10 + 8) != v10 || (a2 = (__int64 **)v7[2], *a2 != v10) )
    __fastfail(3u);
  *a2 = v13;
  v13[1] = (__int64)a2;
  v10[1] = (__int64)v10;
  *v10 = (__int64)v10;
LABEL_10:
  if ( v8 < 0 )
  {
    if ( *(_QWORD *)(a1 + 768) || *(_DWORD *)(a1 + 976) )
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        20,
        22,
        (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        20,
        23,
        (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
        v7[4]);
      Win32FreePool(v7, v14, v15);
    }
  }
  else
  {
    --v9[32];
    WPP_RECORDER_SF_qi(WPP_GLOBAL_Control->DeviceExtension, (_BYTE)a2, a3, 21);
    rimFreeAutoRepeatCompleteFrame(v9 + 8);
    *(_BYTE *)(a1 + 712) = 0;
    rimDispatchCompleteFrame(a1, v9 + 8, v7);
    ObfDereferenceObject(v9);
  }
}
