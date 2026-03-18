/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C007E954
 * Callers:
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C007F72C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01CE448 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0007E1C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // edx
  struct DXGRESOURCE *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // edx
  DXGDEVICESYNCOBJECT *v14; // rcx
  _BYTE v15[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 25);
  if ( !v1 )
    goto LABEL_5;
  v3 = *(_QWORD *)(v1 + 40);
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 48), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 25) + 1729LL) = 1;
  if ( *((_DWORD *)this + 660) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v15,
      (struct DXGPROCESS *)v3);
    v4 = *((unsigned int *)this + 660);
    v5 = (*((_DWORD *)this + 660) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v5 < *(_DWORD *)(v3 + 240)
      && (v6 = *(_QWORD *)(v3 + 224),
          v4 = ((unsigned int)v4 >> 25) & 0x60,
          v7 = *(_DWORD *)(v6 + 16 * v5 + 8),
          (_BYTE)v4 == (*(_BYTE *)(v6 + 16 * v5 + 8) & 0x60))
      && (v7 & 0x2000) == 0
      && (v7 & 0x1F) != 0
      && (*(_BYTE *)(v6 + 16LL * (unsigned int)v5 + 8) & 0x1F) == 4 )
    {
      v8 = *(struct DXGRESOURCE **)(v6 + 16LL * (unsigned int)v5);
      if ( v8 )
      {
LABEL_15:
        v10 = *((_DWORD *)this + 660);
        v11 = (v10 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v11 < *(_DWORD *)(v3 + 240) )
        {
          v12 = *(_QWORD *)(v3 + 224);
          v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
          if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
            && (v13 & 0x2000) == 0
            && (v13 & 0x1F) != 0 )
          {
            *(_DWORD *)(v12 + 16LL * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
        DXGDEVICE::DestroyAllocationInternal(
          *((DXGDEVICE **)this + 25),
          0,
          0LL,
          v8,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        goto LABEL_3;
      }
    }
    else
    {
      v8 = 0LL;
    }
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 3651LL;
    WdLogEvent5_WdAssertion(v9);
    goto LABEL_15;
  }
LABEL_3:
  if ( *((_DWORD *)this + 666) )
  {
    v14 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 334);
    if ( v14 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v14);
    *((_DWORD *)this + 666) = 0;
    *((_QWORD *)this + 334) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 25) + 1729LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_5:
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
}
