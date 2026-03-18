/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C0008B30
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00090F0 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = *(_DWORD *)(a1 + 232);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( a2 == 2 )
      {
        *(LARGE_INTEGER *)(a1 + 264) = KeQueryPerformanceCounter(0LL);
        goto LABEL_4;
      }
    }
    else if ( v2 == 2 && a2 == 1 )
    {
      *(_QWORD *)(a1 + 256) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = 0LL;
      goto LABEL_4;
    }
    if ( !a2 )
    {
      *(_QWORD *)(a1 + 256) = 0LL;
      *(_QWORD *)(a1 + 264) = 0LL;
      *(_QWORD *)(a1 + 272) = 0LL;
      *(_QWORD *)(a1 + 280) = 0LL;
      goto LABEL_4;
    }
  }
  else if ( a2 == 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_BYTE *)(a1 + 288) &= ~1u;
    *(LARGE_INTEGER *)(a1 + 256) = PerformanceCounter;
    goto LABEL_4;
  }
  if ( v2 != a2 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 232) = a2;
  return v3;
}
