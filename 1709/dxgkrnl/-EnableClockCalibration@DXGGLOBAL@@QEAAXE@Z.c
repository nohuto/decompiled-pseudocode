/*
 * XREFs of ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C01AA394
 * Callers:
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C01AA06C (-DxgkEnableClockCalibration@@YAXE@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0083C04 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGGLOBAL::EnableClockCalibration(DXGGLOBAL *this, char a2)
{
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  char v9[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  v3 = (_QWORD **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 400));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = *v3;
  while ( v4 != v3 && v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( v5[289] )
    {
      _m_prefetchw(v5 + 3);
      v6 = v5[3];
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v5 + 3, v6 + 1, v6);
        if ( v7 == v6 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      if ( (_BYTE)v6 )
      {
        v10 = v5;
        v11 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v5);
        if ( *((_DWORD *)v5 + 44) == 1 )
          ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)v5[289], a2);
        if ( v11 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
      }
    }
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
