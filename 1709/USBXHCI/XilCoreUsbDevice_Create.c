/*
 * XREFs of XilCoreUsbDevice_Create @ 0x1C0041320
 * Callers:
 *     XilUsbDevice_Create @ 0x1C0033180 (XilUsbDevice_Create.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000FE18 (XilCommonBuffer_AcquireBufferEx.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilCoreUsbDevice_FreeResources @ 0x1C0041428 (XilCoreUsbDevice_FreeResources.c)
 */

__int64 __fastcall XilCoreUsbDevice_Create(__int64 a1, char a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  int v7; // esi
  __int64 v8; // rbp
  void *v9; // r14
  int v10; // edx
  _DWORD *v11; // rax
  unsigned __int16 v12; // r9
  int v13; // edx
  _DWORD *v14; // rax

  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a3 + 16) = a2;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = (a2 != 0) + 1;
  v8 = *(_QWORD *)(v5 + 88);
  v9 = *(void **)(v5 + 120);
  if ( !a2 )
  {
    v10 = 2048;
    if ( (*(_DWORD *)(v8 + 104) & 4) == 0 )
      v10 = 1024;
    v11 = XilCommonBuffer_AcquireBufferEx(v9, v10, a3, 829842756, v7);
    *(_QWORD *)(a3 + 24) = v11;
    if ( !v11 )
    {
      v12 = 10;
LABEL_10:
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 72LL),
        2u,
        0xCu,
        v12,
        (__int64)&WPP_6581be1ad9ae3ab599c0702d54e65164_Traceguids,
        a1);
      XilCoreUsbDevice_FreeResources(a3);
      return (unsigned int)-1073741670;
    }
  }
  v13 = 2112;
  if ( (*(_DWORD *)(v8 + 104) & 4) == 0 )
    v13 = 1056;
  v14 = XilCommonBuffer_AcquireBufferEx(v9, v13, a3, 846619972, v7);
  *(_QWORD *)(a3 + 32) = v14;
  if ( !v14 )
  {
    v12 = 11;
    goto LABEL_10;
  }
  return v6;
}
