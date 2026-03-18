/*
 * XREFs of ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C0071A98
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ScaleDPIRect @ 0x1C0049D80 (ScaleDPIRect.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0072984 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall InitializeMonitorDpiRectsAndTransforms(struct tagMONITOR *a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  int v4; // r15d
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int16 v7; // r13
  __int64 v8; // r14
  int *v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rax
  float v15; // xmm4_4
  float v16; // xmm0_4
  unsigned __int16 v17; // [rsp+70h] [rbp+8h]
  unsigned __int16 v18; // [rsp+78h] [rbp+10h]
  _DWORD *v19; // [rsp+80h] [rbp+18h]

  v18 = a2;
  v2 = *((_QWORD *)a1 + 5);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 28);
  v17 = *(_WORD *)(v2 + 128);
  do
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( v4 )
    {
      v9 = (int *)(v6 + 60);
      v8 = 528LL;
      v7 = *((_WORD *)gpsi + 4339);
      v10 = (_DWORD *)(v6 + 108);
    }
    else
    {
      v7 = 96;
      v8 = 520LL;
      v9 = (int *)(v6 + 44);
      v10 = (_DWORD *)(v6 + 92);
    }
    v19 = v10;
    v11 = (__int64)ExpandMonitorSpaceVertex(v4 == 0, a2, *(struct tagPOINT *)(v6 + 28));
    ScaleDPIRect(v9, (__m128i *)(v6 + 28), v7, v17, v11, v5);
    ScaleDPIRect(v19, (__m128i *)(*((_QWORD *)a1 + 5) + 76LL), v7, v17, v11, v5);
    v12 = *((_QWORD *)a1 + 5);
    if ( *(_WORD *)(v12 + 128) == v7 && *(_DWORD *)(v12 + 28) == *v9 && *(_DWORD *)(v12 + 32) == v9[1] )
    {
      v13 = *(_QWORD *)((char *)a1 + v8);
      if ( v13 )
      {
        Win32FreePool(v13);
        *(_QWORD *)((char *)a1 + v8) = 0LL;
      }
    }
    else
    {
      v14 = *(void **)((char *)a1 + v8);
      if ( v14
        || (v14 = (void *)Win32AllocPoolWithQuota(64LL, 0x786D7355u), (*(_QWORD *)((char *)a1 + v8) = v14) != 0LL) )
      {
        memset(v14, 0, 0x40uLL);
        v15 = (float)v7;
        v16 = (float)*(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 128LL) / v15;
        **(float **)((char *)a1 + v8) = v16;
        *(float *)(*(_QWORD *)((char *)a1 + v8) + 20LL) = v16;
        *(_DWORD *)(*(_QWORD *)((char *)a1 + v8) + 40LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)((char *)a1 + v8) + 60LL) = 1065353216;
        *(float *)(*(_QWORD *)((char *)a1 + v8) + 48LL) = (float)*(int *)(*((_QWORD *)a1 + 5) + 28LL)
                                                        - (float)((float)((float)*(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 128LL)
                                                                        * (float)*v9)
                                                                / v15);
        *(float *)(*(_QWORD *)((char *)a1 + v8) + 52LL) = (float)*(int *)(*((_QWORD *)a1 + 5) + 32LL)
                                                        - (float)((float)((float)*(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 128LL)
                                                                        * (float)v9[1])
                                                                / v15);
      }
    }
    a2 = v18;
    ++v4;
  }
  while ( v4 < 2 );
}
