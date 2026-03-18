/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C00AAED0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DoesMsgNeedDPITransform @ 0x1C00FC344 (DoesMsgNeedDPITransform.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int16 *a4,
        _DWORD *a5,
        __int64 a6)
{
  unsigned int v6; // edi
  __int64 *v8; // r13
  unsigned int v9; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v11; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rsi
  int v17; // edi
  int v18; // edi
  int v19; // eax
  _DWORD *v20; // rbx
  int v21; // edi
  int v22; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rsi
  unsigned int v31; // edi
  int v32; // [rsp+20h] [rbp-59h] BYREF
  int v33; // [rsp+24h] [rbp-55h]
  int v34; // [rsp+28h] [rbp-51h] BYREF
  int v35; // [rsp+2Ch] [rbp-4Dh]
  unsigned int v36; // [rsp+30h] [rbp-49h]
  __int64 *v37; // [rsp+38h] [rbp-41h]
  int v38; // [rsp+40h] [rbp-39h] BYREF
  int v39; // [rsp+44h] [rbp-35h]
  int v40; // [rsp+48h] [rbp-31h]
  _DWORD v41[2]; // [rsp+50h] [rbp-29h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-21h]
  int v43; // [rsp+60h] [rbp-19h] BYREF
  int v44; // [rsp+64h] [rbp-15h]
  int v45; // [rsp+68h] [rbp-11h]
  int v46; // [rsp+6Ch] [rbp-Dh]
  int v47; // [rsp+70h] [rbp-9h] BYREF
  int v48; // [rsp+74h] [rbp-5h]
  int v49; // [rsp+78h] [rbp-1h]
  int v50; // [rsp+7Ch] [rbp+3h]

  v6 = 0;
  v37 = a3;
  v8 = a3;
  v40 = a2;
  v9 = a1;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = a5[92];
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v36 = CurrentThreadDpiAwarenessContext;
  if ( a6 )
  {
    v11 = *(_DWORD *)(a6 + 368);
  }
  else
  {
    v11 = 18;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v14 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          if ( *(_QWORD *)(v14 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
          if ( !*(_DWORD *)(v14 + 340) )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
            v8 = v37;
            if ( CurrentProcessWin32Process )
              v11 = *(_DWORD *)(CurrentProcessWin32Process + 280);
            goto LABEL_16;
          }
          v11 = *(_DWORD *)(v14 + 340);
        }
        v8 = v37;
      }
    }
  }
LABEL_16:
  if ( (((unsigned __int16)(v36 >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
    return 0LL;
  v16 = *(_QWORD *)a4;
  if ( !(unsigned int)DoesMsgNeedDPITransform(v9, a2, *(_QWORD *)a4) )
    return 0LL;
  if ( !v40 || v9 - 132 <= 0x19B )
    goto LABEL_36;
  if ( v9 == 834 )
    goto LABEL_35;
  if ( v9 <= 0x220 )
  {
    if ( v9 == 544 )
    {
      v47 = *(_DWORD *)(v16 + 24);
      v48 = *(_DWORD *)(v16 + 28);
      v49 = *(_DWORD *)(v16 + 24) + *(_DWORD *)(v16 + 32);
      v50 = *(_DWORD *)(v16 + 36) + *(_DWORD *)(v16 + 28);
      v6 = TransformRectBetweenCoordinateSpaces(&v43, &v47, a5, a6);
      *(_DWORD *)(v16 + 24) = v43;
      *(_DWORD *)(v16 + 28) = v44;
      *(_DWORD *)(v16 + 32) = v45 - v43;
      *(_DWORD *)(v16 + 36) = v46 - v44;
      goto LABEL_63;
    }
    if ( v9 >= 0x46 )
    {
      if ( v9 <= 0x47 )
      {
        v47 = *(_DWORD *)(v16 + 16);
        v48 = *(_DWORD *)(v16 + 20);
        v49 = *(_DWORD *)(v16 + 16) + *(_DWORD *)(v16 + 24);
        v50 = *(_DWORD *)(v16 + 28) + *(_DWORD *)(v16 + 20);
        v6 = TransformRectBetweenCoordinateSpaces(&v43, &v47, a5, a6);
        *(_DWORD *)(v16 + 16) = v43;
        *(_DWORD *)(v16 + 20) = v44;
        *(_DWORD *)(v16 + 24) = v45 - v43;
        *(_DWORD *)(v16 + 28) = v46 - v44;
      }
      else
      {
        if ( v9 == 83 )
          return TransformPointBetweenCoordinateSpaces(v16 + 32, v16 + 32, a5, a6);
        if ( v9 == 131 )
        {
          if ( !*v8 )
            return TransformRectBetweenCoordinateSpaces(v16, v16, a5, a6);
          v17 = TransformRectBetweenCoordinateSpaces(v16, v16, a5, a6);
          v18 = TransformRectBetweenCoordinateSpaces(v16 + 16, v16 + 16, a5, a6) | v17;
          v19 = TransformRectBetweenCoordinateSpaces(v16 + 32, v16 + 32, a5, a6);
          v20 = *(_DWORD **)(v16 + 48);
          v21 = v19 | v18;
          v47 = v20[4];
          v48 = v20[5];
          v49 = v20[4] + v20[6];
          v50 = v20[7] + v20[5];
          v22 = TransformRectBetweenCoordinateSpaces(&v43, &v47, a5, a6);
          v20[4] = v43;
          v20[5] = v44;
          v20[6] = v45 - v43;
          v20[7] = v46 - v44;
          return v22 | (unsigned int)v21;
        }
      }
    }
    goto LABEL_36;
  }
  if ( v9 == 643 )
  {
    v24 = *v8;
    if ( (unsigned __int64)(*v8 - 7) <= 1 )
    {
      v25 = TransformPointBetweenCoordinateSpaces(v16 + 8, v16 + 8, a5, a6);
      v26 = v16 + 16;
    }
    else
    {
      if ( (unsigned __int64)(v24 - 11) > 1 )
      {
        if ( v24 == 16 )
        {
          v32 = (__int16)v16;
          v33 = a4[1];
          v6 = TransformPointBetweenCoordinateSpaces(&v34, &v32, a5, a6);
          *a4 = v34;
          a4[1] = v35;
        }
        goto LABEL_63;
      }
      v25 = TransformPointBetweenCoordinateSpaces(v16 + 4, v16 + 4, a5, a6);
      v26 = v16 + 12;
    }
    v6 = TransformRectBetweenCoordinateSpaces(v26, v26, a5, a6) | v25;
LABEL_63:
    switch ( v9 )
    {
      case 0x20Au:
      case 0x20Eu:
      case 0x241u:
      case 0x242u:
      case 0x243u:
      case 0x245u:
      case 0x246u:
      case 0x247u:
      case 0x249u:
      case 0x24Au:
      case 0x24Eu:
      case 0x24Fu:
      case 0x251u:
      case 0x252u:
      case 0x2A0u:
      case 0x2F2u:
      case 0x2F3u:
      case 0x2F4u:
        goto LABEL_46;
      case 0x20Bu:
      case 0x20Cu:
      case 0x20Du:
      case 0x2A1u:
        goto LABEL_67;
      case 0x210u:
        if ( v9 != 528 || *(_WORD *)v8 != 582 )
          goto LABEL_46;
        break;
      default:
        return v6;
    }
    return v6;
  }
  if ( v9 == 833 )
LABEL_35:
    v6 = 1;
LABEL_36:
  if ( v9 == 132 )
    goto LABEL_46;
  if ( v9 > 0x33F )
    return v6;
  if ( v9 <= 0x209 )
  {
    if ( v9 >= 0x200 )
      goto LABEL_67;
    if ( v9 > 0xA9 )
    {
      if ( v9 < 0xAB )
        return v6;
      if ( v9 > 0xAD )
      {
        if ( v9 != 274 )
          return v6;
        if ( !a4[1] )
          return v6;
      }
      goto LABEL_46;
    }
    if ( v9 < 0xA0 )
    {
      if ( v9 != 3 )
      {
        if ( v9 == 123 )
          goto LABEL_46;
        return v6;
      }
LABEL_67:
      if ( !a5 )
        return v6;
      v32 = *a4;
      v33 = (__int16)HIWORD(*(_DWORD *)a4);
      v38 = a5[36];
      v39 = a5[37];
      TransformPointBetweenCoordinateSpaces(v41, &v38, a6, a5);
      v32 += v41[0];
      v33 += v41[1];
      v6 = TransformPointBetweenCoordinateSpaces(&v34, &v32, a5, a6);
      v34 -= v38;
      v35 -= v39;
      goto LABEL_47;
    }
LABEL_46:
    v32 = *a4;
    v33 = (__int16)HIWORD(*(_DWORD *)a4);
    v6 = TransformPointBetweenCoordinateSpaces(&v34, &v32, a5, a6);
LABEL_47:
    *(_QWORD *)a4 = ((unsigned __int16)v35 << 16) | (unsigned __int16)v34;
    return v6;
  }
  if ( v9 <= 0x313 )
  {
    if ( v9 == 787 )
    {
      if ( *(_QWORD *)a4 == 0xFFFFFFFFLL )
        return v6;
      goto LABEL_46;
    }
    goto LABEL_63;
  }
  if ( v9 != 831 )
    return v6;
  if ( !a6 )
    return v6;
  v27 = *(_QWORD *)a4;
  if ( !*(_QWORD *)a4 )
    return v6;
  v28 = TransformRectBetweenCoordinateSpaces(v27 + 4, v27 + 4, a5, a6);
  v29 = v27 + 44;
  v30 = 6LL;
  v31 = v28;
  do
  {
    v31 |= TransformRectBetweenCoordinateSpaces(v29, v29, a5, a6);
    v29 += 16LL;
    --v30;
  }
  while ( v30 );
  return v31;
}
