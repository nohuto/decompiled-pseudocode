/*
 * XREFs of ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0030334
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002F768 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
        DirectComposition::CApplicationChannel *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        const unsigned int *a5)
{
  unsigned __int128 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned int v10; // r12d
  struct DirectComposition::CResourceMarshaler *v12; // rsi
  unsigned __int64 v13; // rbp
  signed int v14; // ebx
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned __int64 v17; // r8
  char v19; // [rsp+78h] [rbp+10h] BYREF

  *((_QWORD *)&v5 + 1) = a2;
  v6 = 0LL;
  v19 = 0;
  v7 = 0LL;
  v8 = (unsigned int)(DWORD2(v5) - 1);
  v10 = a3;
  if ( DWORD2(v5) && v8 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v12 = *(struct DirectComposition::CResourceMarshaler **)(v8 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v12 = 0LL;
  }
  v13 = a4;
  v14 = v12 == 0LL ? 0xC0000022 : 0;
  if ( a4 )
  {
    if ( v12 )
    {
      v5 = a4 * (unsigned __int128)8uLL;
      v7 = 8 * a4;
      if ( is_mul_ok(a4, 8uLL) )
      {
        v14 = 0;
      }
      else
      {
        v7 = -1LL;
        v14 = -1073741675;
      }
    }
    if ( v14 >= 0 )
    {
      v6 = Win32AllocPoolWithQuota(v7, 0x66624344u);
      if ( !v6 )
        v14 = -1073741801;
    }
    v15 = 0LL;
    if ( v14 < 0 )
      goto LABEL_27;
    do
    {
      *((_QWORD *)&v5 + 1) = (unsigned int)v15;
      if ( (unsigned int)v15 >= v13 )
        break;
      v16 = a5[v15];
      v17 = v16 - 1;
      if ( v16 && v17 < *((_QWORD *)this + 10) )
        a3 = *(_QWORD *)(v17 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
      else
        a3 = 0LL;
      *(_QWORD *)(v6 + 8 * v15) = a3;
      if ( !a3 )
        v14 = -1073741811;
      v15 = (unsigned int)(v15 + 1);
    }
    while ( v14 >= 0 );
  }
  if ( v14 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)v12 + 176LL))(
            v12,
            this,
            v10,
            v6,
            v13,
            &v19);
    if ( v14 >= 0 )
    {
      if ( v19 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v12);
      return (unsigned int)v14;
    }
  }
LABEL_27:
  if ( v6 )
    Win32FreePool(v6, *((_QWORD *)&v5 + 1), a3);
  return (unsigned int)v14;
}
