/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C0194D1C
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C0197400 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C016C7C8 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdi
  char v9; // si
  _QWORD *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  _BYTE v14[16]; // [rsp+28h] [rbp-29h] BYREF
  char v15[8]; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-11h]
  char v17; // [rsp+48h] [rbp-9h]
  char v18[8]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v19[32]; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v20[40]; // [rsp+80h] [rbp+2Fh] BYREF

  v4 = (_QWORD **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGGLOBAL *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v8 = *v4;
  v9 = 1;
  while ( 1 )
  {
    do
    {
      if ( v8 == v4 || !v8 )
      {
        v9 = 0;
        goto LABEL_20;
      }
      v10 = v8;
      v8 = (_QWORD *)*v8;
      _m_prefetchw(v10 + 3);
      v11 = v10[3];
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v10 + 3, v11 + 1, v11);
        if ( v12 == v11 )
        {
          LOBYTE(v11) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v11 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v10, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
    if ( v10[285] )
      break;
LABEL_14:
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
  }
  v16 = v10;
  v17 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  if ( *((_DWORD *)v10 + 44) != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((DXGADAPTER **)v10[285], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((DXGADAPTER **)v10[285], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    if ( v17 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    goto LABEL_14;
  }
  if ( v17 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
LABEL_20:
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v5, v6, v7);
  return v9;
}
