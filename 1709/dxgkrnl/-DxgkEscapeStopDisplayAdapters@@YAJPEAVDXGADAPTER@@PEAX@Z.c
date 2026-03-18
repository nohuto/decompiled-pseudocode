/*
 * XREFs of ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A8FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C002E788 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkEscapeStopDisplayAdapters(PVOID *a1, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  PVOID v9; // rsi
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11);
  v7 = 0;
  if ( v4 >= 0 )
  {
    v9 = a1[24];
    if ( v9 )
    {
      ObfReferenceObject(a1[24]);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v11);
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1) )
      {
        *a2 = 0;
        DxgkInvalidateDeviceState((__int64)a1[24]);
      }
      ObfDereferenceObject(v9);
    }
    else
    {
      v7 = -1073741823;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = a1;
    v8[4] = *((int *)a1 + 68);
    v8[5] = *((unsigned int *)a1 + 67);
  }
  else
  {
    v7 = v4;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return v7;
}
