/*
 * XREFs of ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C02160B4
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 */

void __fastcall xxxDrawItemUnderline(
        struct tagMENU *a1,
        struct tagITEM *a2,
        HDC a3,
        __int64 a4,
        int a5,
        unsigned __int16 *a6,
        int a7)
{
  int v8; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ThreadWin32Thread; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 DPIMetrics; // rax
  int v17; // ebp
  int v18; // eax
  WCHAR *v19; // rdx
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  struct tagSIZE v25; // [rsp+30h] [rbp-28h] BYREF
  struct tagSIZE v26; // [rsp+38h] [rbp-20h] BYREF

  v8 = a4;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, (__int64)a3, a4);
  if ( a7 != 0xFFFF )
  {
    if ( *((_DWORD *)a2 + 23) == 0x7FFFFFFF
      || (v12 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v12) + 720), (v12 & 0xF) != 0) )
    {
      if ( a7 )
      {
        v25 = 0LL;
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a3, a6, a7, &v25);
          if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
            return;
        }
        else
        {
          GreGetTextExtentW(a3, a6, a7, &v25, 1);
        }
        DPIMetrics = GetDPIMetrics(v15, v14);
        v12 = (unsigned int)(v25.cx - *(_DWORD *)(DPIMetrics + 16));
        *((_DWORD *)a2 + 23) = v12;
      }
      else
      {
        *((_DWORD *)a2 + 23) = 0;
      }
    }
    v17 = *((_DWORD *)a2 + 23) + v8;
    if ( *((_DWORD *)a2 + 24) )
      goto LABEL_17;
    v26 = 0LL;
    v18 = CALL_LPK(ThreadWin32Thread);
    v19 = &a6[a7];
    if ( v18 )
    {
      xxxClientGetTextExtentPointW(a3, v19, 1, &v26);
      v20 = (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1;
    }
    else
    {
      v20 = (unsigned int)GreGetTextExtentW(a3, v19, 1u, &v26, 1) == 0;
    }
    if ( !v20 )
    {
      v23 = GetDPIMetrics(v22, v21);
      v12 = (unsigned int)(v26.cx - *(_DWORD *)(v23 + 16));
      *((_DWORD *)a2 + 24) = v12;
LABEL_17:
      v24 = GetDPIMetrics(v12, v11);
      NtGdiPatBlt(a3, v17, *(_DWORD *)(v24 + 24) + a5, *((_DWORD *)a2 + 24), 1, 15728673);
    }
  }
}
