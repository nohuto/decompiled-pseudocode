/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0217614
 * Callers:
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     MNIsOwnerDrawItem @ 0x1C0042E88 (MNIsOwnerDrawItem.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     FindCharPosition @ 0x1C0239328 (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(
        HDC a1,
        struct tagMENU *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // r13d
  unsigned int v8; // r14d
  __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  __int64 v13; // rdi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r10d
  int v18; // r9d
  int CharPosition; // eax
  __int64 v20; // r12
  int v21; // r11d
  __int64 ThreadWin32Thread; // rax
  int v23; // eax
  unsigned int v24; // r8d
  WCHAR *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 DPIMetrics; // rax
  int v31; // r10d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rdi
  _DWORD *v37; // rdi
  __int64 v38; // rcx
  __int64 v40; // [rsp+20h] [rbp-58h]
  struct tagSIZE v41; // [rsp+30h] [rbp-48h] BYREF
  __int64 v42; // [rsp+38h] [rbp-40h]
  unsigned int v44; // [rsp+A0h] [rbp+28h]

  v7 = a6 + a5;
  v8 = 0;
  v10 = a3;
  if ( a3 >= *((_DWORD *)a2 + 17) || a3 > a4 )
    return v8;
  v11 = 0;
  v44 = 0;
  v12 = v10;
  if ( (_DWORD)v10 == -1 )
    v13 = 0LL;
  else
    v13 = *((_QWORD *)a2 + 12) + 152 * v10;
  if ( (unsigned int)v10 < a4 )
  {
    while ( 1 )
    {
      if ( !v13 )
      {
LABEL_26:
        LODWORD(v10) = a3;
        goto LABEL_27;
      }
      v15 = MNIsOwnerDrawItem((__int64)a2, (_DWORD *)v13);
      v16 = *(_QWORD *)(v13 + 40);
      v17 = 0;
      *(_DWORD *)(v13 + 88) = v18;
      v42 = v16;
      if ( v16 )
      {
        if ( *(_DWORD *)(v13 + 48) )
          break;
      }
      if ( v15 )
        goto LABEL_23;
LABEL_17:
      v31 = v7 + v17;
      if ( v31 <= (int)v8 )
        v31 = v8;
      ++v12;
      v8 = v31;
      if ( v12 == -1 || v12 >= *((_DWORD *)a2 + 17) )
        v13 = 0LL;
      else
        v13 = *((_QWORD *)a2 + 12) + 152LL * v12;
      if ( v12 >= a4 )
        goto LABEL_26;
    }
    if ( !v15 )
    {
      v41 = 0LL;
      CharPosition = FindCharPosition(v16, 9LL);
      v20 = CharPosition;
      if ( CharPosition < v21 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v23 = CALL_LPK(ThreadWin32Thread);
        v24 = *(_DWORD *)(v13 + 48) - v20 - 1;
        v25 = (WCHAR *)(v42 + 2 + 2 * v20);
        if ( v23 )
          xxxClientGetTextExtentPointW(a1, v25, v24, &v41);
        else
          GreGetTextExtentW(a1, v25, v24, &v41, 1);
        DPIMetrics = GetDPIMetrics(v27, v26, v28, v29, v40);
        v17 = *(_DWORD *)(DPIMetrics + 8) + v41.cx;
      }
      v11 = v44;
      goto LABEL_17;
    }
LABEL_23:
    v44 = ++v11;
    goto LABEL_17;
  }
LABEL_27:
  if ( v11 != a4 - (_DWORD)v10 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (v33 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
          (*(_DWORD *)(v33 + 52) & 1) != 0) )
    {
      v36 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v37 = (_DWORD *)(gpsi + 8204LL);
LABEL_35:
        v8 += *(_DWORD *)(GetDPIMetrics(v33, v32, v34, v35, v40) + 8) + *v37;
        goto LABEL_39;
      }
    }
    else
    {
      v36 = (_QWORD *)gpsi;
    }
    v37 = (_DWORD *)(*v36 + 6716LL);
    goto LABEL_35;
  }
LABEL_39:
  while ( 1 )
  {
    v38 = (_DWORD)v10 == -1 || (unsigned int)v10 >= *((_DWORD *)a2 + 17)
        ? 0LL
        : *((_QWORD *)a2 + 12) + 152LL * (unsigned int)v10;
    if ( (unsigned int)v10 >= a4 || !v38 )
      break;
    *(_DWORD *)(v38 + 80) = v8 - a6;
    LODWORD(v10) = v10 + 1;
  }
  return v8;
}
