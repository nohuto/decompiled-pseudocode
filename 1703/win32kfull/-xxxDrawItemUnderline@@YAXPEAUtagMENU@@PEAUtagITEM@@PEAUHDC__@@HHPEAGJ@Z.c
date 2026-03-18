/*
 * XREFs of ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0215194
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0215328 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 */

void __fastcall xxxDrawItemUnderline(
        struct tagMENU *a1,
        struct tagITEM *a2,
        HDC a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 DPIMetrics; // rax
  int v21; // ebp
  int v22; // eax
  WCHAR *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-38h]
  struct tagSIZE v31; // [rsp+30h] [rbp-28h] BYREF
  struct tagSIZE v32; // [rsp+38h] [rbp-20h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a7 != 0xFFFF )
  {
    if ( *((_DWORD *)a2 + 23) == 0x7FFFFFFF
      || (v12 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v12, v11) + 712), (v12 & 0xF) != 0) )
    {
      if ( a7 )
      {
        v31 = 0LL;
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a3, a6, a7, &v31);
          if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
            return;
        }
        else
        {
          GreGetTextExtentW(a3, a6, a7, &v31, 1);
        }
        DPIMetrics = GetDPIMetrics(v17, v16, v18, v19, v30);
        v12 = (unsigned int)(v31.cx - *(_DWORD *)(DPIMetrics + 16));
        *((_DWORD *)a2 + 23) = v12;
      }
      else
      {
        *((_DWORD *)a2 + 23) = 0;
      }
    }
    v21 = *((_DWORD *)a2 + 23) + a4;
    if ( !*((_DWORD *)a2 + 24) )
    {
      v32 = 0LL;
      v22 = CALL_LPK(ThreadWin32Thread);
      v23 = &a6[a7];
      if ( v22 )
      {
        xxxClientGetTextExtentPointW(a3, v23, 1u, &v32);
        if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
          return;
      }
      else
      {
        GreGetTextExtentW(a3, v23, 1u, &v32, 1);
      }
      v28 = GetDPIMetrics(v25, v24, v26, v27, v30);
      v12 = (unsigned int)(v32.cx - *(_DWORD *)(v28 + 16));
      *((_DWORD *)a2 + 24) = v12;
    }
    v29 = GetDPIMetrics(v12, v11, v13, v14, v30);
    NtGdiPatBlt(a3, v21, *(_DWORD *)(v29 + 24) + a5, *((_DWORD *)a2 + 24), 1, 15728673);
  }
}
