/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C005505C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DoesMsgNeedDPITransform @ 0x1C00ECDD8 (DoesMsgNeedDPITransform.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int16 *a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 *v7; // r13
  unsigned int v8; // ebx
  unsigned int v9; // esi
  int CurrentThreadDpiAwarenessContext; // eax
  int v11; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // esi
  int v27; // esi
  int v28; // eax
  _DWORD *v29; // rbx
  int v31; // [rsp+20h] [rbp-60h] BYREF
  int v32; // [rsp+24h] [rbp-5Ch]
  int v33; // [rsp+28h] [rbp-58h] BYREF
  int v34; // [rsp+2Ch] [rbp-54h]
  int v35; // [rsp+30h] [rbp-50h]
  __int64 *v36; // [rsp+38h] [rbp-48h]
  int v37; // [rsp+40h] [rbp-40h] BYREF
  int v38; // [rsp+44h] [rbp-3Ch]
  int v39; // [rsp+48h] [rbp-38h]
  _DWORD v40[2]; // [rsp+50h] [rbp-30h] BYREF
  int v41; // [rsp+58h] [rbp-28h] BYREF
  int v42; // [rsp+5Ch] [rbp-24h]
  int v43; // [rsp+60h] [rbp-20h]
  int v44; // [rsp+64h] [rbp-1Ch]
  int v45; // [rsp+68h] [rbp-18h] BYREF
  int v46; // [rsp+6Ch] [rbp-14h]
  int v47; // [rsp+70h] [rbp-10h]
  int v48; // [rsp+74h] [rbp-Ch]

  v7 = a3;
  v39 = a2;
  v8 = a1;
  v36 = a3;
  v9 = 0;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = a5[92];
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v35 = CurrentThreadDpiAwarenessContext;
  if ( a6 )
  {
    v11 = *(_DWORD *)(a6 + 368);
    goto LABEL_11;
  }
  LOBYTE(v11) = 18;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v14 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v14 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( !*(_DWORD *)(v14 + 340) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, 0LL);
        v7 = v36;
        if ( CurrentProcessWin32Process )
          v11 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        goto LABEL_11;
      }
      LOBYTE(v11) = *(_DWORD *)(v14 + 340);
    }
    v7 = v36;
  }
LABEL_11:
  if ( (((unsigned __int8)v35 ^ (unsigned __int8)v11) & 0xF) == 0 )
    return 0LL;
  v17 = *(_QWORD *)a4;
  if ( !(unsigned int)DoesMsgNeedDPITransform(v8, 0LL, *(_QWORD *)a4) )
    return 0LL;
  if ( v39 == (_DWORD)v18 || v8 < 0x46 )
    goto LABEL_23;
  if ( v8 <= 0x47 )
  {
    v45 = *(_DWORD *)(v17 + 16);
    v46 = *(_DWORD *)(v17 + 20);
    v47 = *(_DWORD *)(v17 + 16) + *(_DWORD *)(v17 + 24);
    v48 = *(_DWORD *)(v17 + 28) + *(_DWORD *)(v17 + 20);
    v9 = TransformRectBetweenCoordinateSpaces(&v41, &v45, a5, a6);
    *(_DWORD *)(v17 + 16) = v41;
    *(_DWORD *)(v17 + 20) = v42;
    *(_DWORD *)(v17 + 24) = v43 - v41;
    *(_DWORD *)(v17 + 28) = v44 - v42;
    LOWORD(v18) = 0;
    goto LABEL_23;
  }
  switch ( v8 )
  {
    case 0x342u:
LABEL_44:
      v9 = 1;
      break;
    case 0x53u:
      return (unsigned int)TransformPointBetweenCoordinateSpaces(v17 + 32, v17 + 32, a5, a6);
    case 0x83u:
      if ( *v7 != v18 )
      {
        v26 = TransformRectBetweenCoordinateSpaces(v17, v17, a5, a6);
        v27 = TransformRectBetweenCoordinateSpaces(v17 + 16, v17 + 16, a5, a6) | v26;
        v28 = TransformRectBetweenCoordinateSpaces(v17 + 32, v17 + 32, a5, a6);
        v29 = *(_DWORD **)(v17 + 48);
        v45 = v29[4];
        v46 = v29[5];
        v47 = v29[4] + v29[6];
        v48 = v29[7] + v29[5];
        v9 = TransformRectBetweenCoordinateSpaces(&v41, &v45, a5, a6) | v28 | v27;
        v29[4] = v41;
        v29[5] = v42;
        v29[6] = v43 - v41;
        v29[7] = v44 - v42;
        return v9;
      }
      return (unsigned int)TransformRectBetweenCoordinateSpaces(v17, v17, a5, a6);
    case 0x220u:
      v45 = *(_DWORD *)(v17 + 24);
      v46 = *(_DWORD *)(v17 + 28);
      v47 = *(_DWORD *)(v17 + 24) + *(_DWORD *)(v17 + 32);
      v48 = *(_DWORD *)(v17 + 36) + *(_DWORD *)(v17 + 28);
      v9 = TransformRectBetweenCoordinateSpaces(&v41, &v45, a5, a6);
      *(_DWORD *)(v17 + 24) = v41;
      *(_DWORD *)(v17 + 28) = v42;
      *(_DWORD *)(v17 + 32) = v43 - v41;
      *(_DWORD *)(v17 + 36) = v44 - v42;
      goto LABEL_79;
    case 0x283u:
      v23 = *v7;
      if ( (unsigned __int64)(*v7 - 7) <= 1 )
      {
        v24 = TransformPointBetweenCoordinateSpaces(v17 + 8, v17 + 8, a5, a6);
        v25 = v17 + 16;
      }
      else
      {
        if ( (unsigned __int64)(v23 - 11) > 1 )
        {
          if ( v23 == 16 )
          {
            v31 = (__int16)v17;
            v32 = a4[1];
            v9 = TransformPointBetweenCoordinateSpaces(&v33, &v31, a5, a6);
            *a4 = v33;
            a4[1] = v34;
          }
          goto LABEL_79;
        }
        v24 = TransformPointBetweenCoordinateSpaces(v17 + 4, v17 + 4, a5, a6);
        v25 = v17 + 12;
      }
      v9 = TransformRectBetweenCoordinateSpaces(v25, v25, a5, a6) | v24;
LABEL_79:
      switch ( v8 )
      {
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
          goto LABEL_28;
        default:
          return v9;
      }
      return v9;
    case 0x341u:
      goto LABEL_44;
  }
LABEL_23:
  if ( v8 <= 0x210 )
  {
    if ( v8 == 528 )
    {
      if ( *(_WORD *)v7 == 582 )
        return v9;
      goto LABEL_28;
    }
    if ( v8 > 0x112 )
    {
      if ( v8 < 0x200 )
        return v9;
      if ( v8 > 0x209 )
      {
        if ( v8 == 522 )
          goto LABEL_28;
        if ( v8 > 0x20D )
        {
          if ( v8 != 526 )
            return v9;
          goto LABEL_28;
        }
      }
    }
    else
    {
      if ( v8 == 274 )
      {
        if ( a4[1] == (_WORD)v18 )
          return v9;
        goto LABEL_28;
      }
      if ( v8 == 132 )
      {
LABEL_28:
        v31 = *a4;
        v32 = (__int16)HIWORD(*(_DWORD *)a4);
        v9 = TransformPointBetweenCoordinateSpaces(&v33, &v31, a5, a6);
LABEL_29:
        *(_QWORD *)a4 = ((unsigned __int16)v34 << 16) | (unsigned __int16)v33;
        return v9;
      }
      if ( v8 != 3 )
      {
        if ( v8 != 123 && (v8 <= 0x9F || v8 > 0xA9 && (v8 <= 0xAA || v8 > 0xAD)) )
          return v9;
        goto LABEL_28;
      }
    }
LABEL_82:
    if ( !a5 )
      return v9;
    v31 = *a4;
    v32 = (__int16)HIWORD(*(_DWORD *)a4);
    v37 = a5[36];
    v38 = a5[37];
    TransformPointBetweenCoordinateSpaces(v40, &v37, a6, a5);
    v31 += v40[0];
    v32 += v40[1];
    v9 = TransformPointBetweenCoordinateSpaces(&v33, &v31, a5, a6);
    v33 -= v37;
    v34 -= v38;
    goto LABEL_29;
  }
  if ( v8 <= 0x2A0 )
  {
    if ( v8 == 672 )
      goto LABEL_28;
    goto LABEL_79;
  }
  if ( v8 == 673 )
    goto LABEL_82;
  if ( v8 > 0x2F1 )
  {
    if ( v8 <= 0x2F4 )
      goto LABEL_28;
    if ( v8 != 787 )
    {
      if ( v8 == 831 )
      {
        if ( a6 )
        {
          v19 = *(_QWORD *)a4;
          if ( *(_QWORD *)a4 )
          {
            v20 = TransformRectBetweenCoordinateSpaces(v19 + 4, v19 + 4, a5, a6);
            v21 = v19 + 44;
            v22 = 6LL;
            v9 = v20;
            do
            {
              v9 |= TransformRectBetweenCoordinateSpaces(v21, v21, a5, a6);
              v21 += 16LL;
              --v22;
            }
            while ( v22 );
          }
        }
      }
      return v9;
    }
    if ( *(_QWORD *)a4 != 0xFFFFFFFFLL )
      goto LABEL_28;
  }
  return v9;
}
