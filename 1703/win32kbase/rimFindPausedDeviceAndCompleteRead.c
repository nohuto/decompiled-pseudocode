/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C0093D18
 * Callers:
 *     rimCompleteReads @ 0x1C0093A64 (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(__int64 a1)
{
  _QWORD **v2; // rdi
  unsigned int v3; // esi
  _QWORD *v4; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v2 = (_QWORD **)(a1 + 720);
  v3 = -1073741823;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == v2 )
      break;
    v6 = v4 - 23;
    v7 = *v4;
    v8 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v8 != v4 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v4[1] = v4;
    *v4 = v4;
    if ( (v6[31] & 0x200) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(a1, v6 + 8);
      if ( !*(_BYTE *)(a1 + 712) )
        return 0;
    }
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0xCu,
      (__int64)&WPP_60f4ec9f61d13c11306ba730254f3965_Traceguids,
      v6,
      a1);
  }
  return v3;
}
