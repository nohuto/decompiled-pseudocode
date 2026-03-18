/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C0094074
 * Callers:
 *     rimCompleteReads @ 0x1C0093A64 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C010C9F4 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00954F4 (rimFreeAutoRepeatCompleteFrame.c)
 *     WPP_RECORDER_SF_qi @ 0x1C010C928 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C010CB20 (rimDispatchCompleteFrame.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(__int64 a1, __int64 a2, int a3)
{
  _QWORD **v3; // rbx
  _QWORD **v5; // rbp
  _QWORD *v6; // rax
  char *v7; // rbp
  int v8; // r12d
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // rcx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v3 = (_QWORD **)(a1 + 680);
  if ( *v3 == v3 || !*(_BYTE *)(a1 + 712) )
    return;
  if ( !*(_QWORD *)(a1 + 768) && !*(_DWORD *)(a1 + 976) )
  {
    v5 = (_QWORD **)*v3;
    v6 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 || (_QWORD **)v6[1] != v5 )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    v7 = (char *)(v5 - 1);
    *((_QWORD *)v7 + 2) = v7 + 8;
    *((_QWORD *)v7 + 1) = v7 + 8;
    v8 = RawInputManagerDeviceObjectResolveHandle(*((char **)v7 + 4), 3u, *((_DWORD *)v7 + 12) == 0, &Object);
    goto LABEL_9;
  }
  v10 = *v3;
  if ( *v3 == v3 )
  {
    v7 = (char *)Object;
    v8 = (int)Object;
LABEL_9:
    v9 = Object;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v7 = (char *)(v10 - 1);
    v11 = RawInputManagerDeviceObjectResolveHandle((char *)v10[3], 3u, *((_DWORD *)v10 + 10) == 0, &Object);
    v9 = Object;
    v8 = v11;
    if ( v11 >= 0 )
      break;
LABEL_19:
    v10 = (_QWORD *)*v10;
    if ( v10 == v3 )
      goto LABEL_10;
  }
  v12 = *((_DWORD *)Object + 62);
  if ( (v12 & 0x1000) != 0 && (v12 & 0x200000) == 0 )
  {
    v8 = -1073741823;
    ObfDereferenceObject(Object);
    goto LABEL_19;
  }
  a2 = *v10;
  v13 = (_QWORD *)*((_QWORD *)v7 + 2);
  if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v13 != v10 )
    __fastfail(3u);
  *v13 = a2;
  *(_QWORD *)(a2 + 8) = v13;
  v10[1] = v10;
  *v10 = v10;
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
        (__int64)&WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x17u,
        (__int64)&WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids,
        *((_QWORD *)v7 + 4));
      Win32FreePool((__int64)v7);
    }
  }
  else
  {
    --v9[32];
    WPP_RECORDER_SF_qi(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 21);
    rimFreeAutoRepeatCompleteFrame(v9 + 8);
    *(_BYTE *)(a1 + 712) = 0;
    rimDispatchCompleteFrame(a1, v9 + 8, v7);
    ObfDereferenceObject(v9);
  }
}
