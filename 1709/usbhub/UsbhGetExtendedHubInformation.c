/*
 * XREFs of UsbhGetExtendedHubInformation @ 0x1C001E840
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D500 (UsbhEtwLogPortInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EA50 (UsbhGetAcpiPortAttributes.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetExtendedHubInformation(__int64 a1)
{
  _DWORD *v2; // rbp
  unsigned __int16 v3; // si
  _DWORD *v4; // rax
  PVOID PoolWithTag; // r14
  _DWORD *v6; // rax
  unsigned __int16 i; // di
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // r9
  __int64 v16; // r10

  v2 = FdoExt(a1);
  v3 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      41,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
  v4 = FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(
                  ExDefaultNonPagedPoolType,
                  4LL * ((unsigned int)*((unsigned __int8 *)v4 + 2938) + 1),
                  0x42554855u);
  if ( PoolWithTag )
  {
    v6 = FdoExt(a1);
    memset(PoolWithTag, 0, 4LL * ((unsigned int)*((unsigned __int8 *)v6 + 2938) + 1));
  }
  *((_QWORD *)v2 + 377) = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = 1; ; ++i )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v8 = *(_QWORD *)(a1 + 64);
      if ( !v8 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v8 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v8);
      if ( i > *(unsigned __int8 *)(v8 + 2938) )
        break;
      if ( ((unsigned __int8)(1 << (i & 7)) & *((_BYTE *)v2 + ((unsigned __int64)i >> 3) + 2943)) != 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            42,
            (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
            i);
        *((_DWORD *)PoolWithTag + i) |= 0x10u;
      }
    }
    UsbhGetAcpiPortAttributes(a1, PoolWithTag);
    v9 = 0;
    if ( *((_QWORD *)v2 + 378) )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        if ( !v10 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v10 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v10);
        if ( v3 > *(unsigned __int8 *)(v10 + 2938) )
          break;
        if ( (*((_DWORD *)PoolWithTag + v3) & 0x40) != 0 )
        {
          if ( (UsbhLogMask & 8) != 0 )
          {
            v11 = *(_QWORD *)(v10 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
            *(_DWORD *)v11 = 1413771367;
            *(_QWORD *)(v11 + 8) = 0LL;
            *(_QWORD *)(v11 + 16) = v3;
            *(_QWORD *)(v11 + 24) = 0LL;
          }
          if ( v3 )
          {
            v12 = *(_QWORD *)(a1 + 64);
            if ( !v12 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v12 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v12);
            if ( v3 <= *(unsigned __int8 *)(v12 + 2938) )
            {
              v13 = *(_QWORD *)(v12 + 3056);
              if ( v13 )
              {
                Log(a1, 8, 1735410750, v3, 2928LL * v3 + v13 - 2928);
                if ( v16 )
                  *(_QWORD *)(v16 + 2920) = (*(_DWORD *)(28 * v15 + *((_QWORD *)v2 + 378) + 20) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(28 * v15 + *((_QWORD *)v2 + 378) + 20)) & 0x7F80)) >> 7;
              }
            }
          }
        }
        ++v3;
      }
    }
    UsbhEtwLogPortInformation(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
