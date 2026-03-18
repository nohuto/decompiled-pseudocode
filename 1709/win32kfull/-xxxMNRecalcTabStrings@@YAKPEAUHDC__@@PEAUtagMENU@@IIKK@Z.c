/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0218794
 * Callers:
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     MNIsOwnerDrawItem @ 0x1C0098288 (MNIsOwnerDrawItem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     FindCharPosition @ 0x1C023B144 (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(
        __int64 a1,
        struct tagMENU *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v7; // r9
  int v8; // r13d
  unsigned int v9; // r14d
  __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // ebp
  __int64 v14; // rdi
  HDC v15; // rbx
  int v16; // eax
  int v17; // r10d
  int CharPosition; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  int v22; // r11d
  __int64 ThreadWin32Thread; // rax
  int v24; // eax
  unsigned int v25; // r8d
  WCHAR *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 DPIMetrics; // rax
  int v30; // r10d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rdi
  __int64 v38; // rcx
  struct tagSIZE v40; // [rsp+30h] [rbp-48h] BYREF
  __int64 v41; // [rsp+38h] [rbp-40h]
  unsigned int v44; // [rsp+A0h] [rbp+28h]

  v7 = a5;
  v8 = a6 + a5;
  v9 = 0;
  v11 = a3;
  if ( a3 < *((_DWORD *)a2 + 17) && a3 <= a4 )
  {
    v12 = 0LL;
    v44 = 0;
    v13 = v11;
    if ( (_DWORD)v11 == -1 )
      v14 = 0LL;
    else
      v14 = *((_QWORD *)a2 + 12) + 152 * v11;
    if ( (unsigned int)v11 < a4 )
    {
      v15 = (HDC)a1;
      while ( 1 )
      {
        if ( !v14 )
        {
LABEL_27:
          LODWORD(v11) = a3;
          goto LABEL_28;
        }
        v16 = MNIsOwnerDrawItem((__int64)a2, (_DWORD *)v14);
        a1 = *(_QWORD *)(v14 + 40);
        v17 = 0;
        *(_DWORD *)(v14 + 88) = v7;
        v41 = a1;
        if ( a1 )
        {
          if ( *(_DWORD *)(v14 + 48) )
            break;
        }
        if ( v16 )
          goto LABEL_24;
LABEL_18:
        v30 = v8 + v17;
        if ( v30 <= (int)v9 )
          v30 = v9;
        ++v13;
        v9 = v30;
        if ( v13 == -1 || v13 >= *((_DWORD *)a2 + 17) )
          v14 = 0LL;
        else
          v14 = *((_QWORD *)a2 + 12) + 152LL * v13;
        if ( v13 >= a4 )
          goto LABEL_27;
      }
      if ( !v16 )
      {
        v40 = 0LL;
        CharPosition = FindCharPosition(a1, 9LL);
        v21 = CharPosition;
        if ( CharPosition < v22 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, v19, v20);
          v24 = CALL_LPK(ThreadWin32Thread);
          v25 = *(_DWORD *)(v14 + 48) - v21 - 1;
          v26 = (WCHAR *)(v41 + 2 + 2 * v21);
          if ( v24 )
            xxxClientGetTextExtentPointW(v15, v26, v25, &v40);
          else
            GreGetTextExtentW(v15, v26, v25, &v40, 1);
          DPIMetrics = GetDPIMetrics(v28, v27);
          v17 = *(_DWORD *)(DPIMetrics + 8) + v40.cx;
        }
        v7 = a5;
        v12 = v44;
        goto LABEL_18;
      }
LABEL_24:
      v12 = (unsigned int)(v12 + 1);
      v44 = v12;
      goto LABEL_18;
    }
LABEL_28:
    if ( (_DWORD)v12 != a4 - (_DWORD)v11 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2, v12, v7) & 0xF) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v33, v34) + 432)
        || (v32 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v35, v36) + 432)
                              + 8LL),
            (*(_DWORD *)(v32 + 52) & 1) == 0)
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v32) + 284) == 96 )
      {
        v37 = (_DWORD *)(gpsi + 8012LL);
      }
      else
      {
        v37 = (_DWORD *)(gpsi + 9500LL);
      }
      v9 += *v37 + *(_DWORD *)(GetDPIMetrics(v32, v31) + 8);
    }
    while ( 1 )
    {
      v38 = (_DWORD)v11 == -1 || (unsigned int)v11 >= *((_DWORD *)a2 + 17)
          ? 0LL
          : *((_QWORD *)a2 + 12) + 152LL * (unsigned int)v11;
      if ( (unsigned int)v11 >= a4 || !v38 )
        break;
      *(_DWORD *)(v38 + 80) = v9 - a6;
      LODWORD(v11) = v11 + 1;
    }
  }
  return v9;
}
