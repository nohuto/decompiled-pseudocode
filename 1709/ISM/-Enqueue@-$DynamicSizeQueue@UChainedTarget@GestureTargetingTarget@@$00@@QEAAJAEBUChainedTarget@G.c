/*
 * XREFs of ?Enqueue@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@GestureTargetingTarget@@@Z @ 0x1800162D8
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z @ 0x18001529C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Enqueue(char **a1, _OWORD *a2)
{
  int v2; // eax
  unsigned int v3; // r14d
  char *v6; // r15
  int v7; // r12d
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  size_t v12; // rbx
  __int64 v13; // rax
  char *v14; // rdx
  __int128 v15; // xmm1
  unsigned int v16; // edx

  v2 = *((_DWORD *)a1 + 2);
  v3 = 0;
  if ( *((_DWORD *)a1 + 5) != v2 )
  {
LABEL_10:
    v13 = 22LL;
    v14 = &(*a1)[2864 * *((unsigned int *)a1 + 4)];
    do
    {
      *(_OWORD *)v14 = *a2;
      *((_OWORD *)v14 + 1) = a2[1];
      *((_OWORD *)v14 + 2) = a2[2];
      *((_OWORD *)v14 + 3) = a2[3];
      *((_OWORD *)v14 + 4) = a2[4];
      *((_OWORD *)v14 + 5) = a2[5];
      *((_OWORD *)v14 + 6) = a2[6];
      v14 += 128;
      v15 = a2[7];
      a2 += 8;
      *((_OWORD *)v14 - 1) = v15;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v14 = *a2;
    *((_OWORD *)v14 + 1) = a2[1];
    *((_OWORD *)v14 + 2) = a2[2];
    v16 = (unsigned int)(*((_DWORD *)a1 + 4) + 1) % *((_DWORD *)a1 + 2);
    ++*((_DWORD *)a1 + 5);
    *((_DWORD *)a1 + 4) = v16;
    return v3;
  }
  v6 = *a1;
  v7 = 2 * v2;
  v8 = (char *)operator new[](saturated_mul((unsigned int)(2 * v2), 0xB30uLL));
  *a1 = v8;
  v9 = v8;
  if ( v8 )
  {
    if ( *((_DWORD *)a1 + 3) )
    {
      v12 = 2864LL * (unsigned int)(*((_DWORD *)a1 + 2) - *((_DWORD *)a1 + 3));
      memcpy_0(v8, &v6[2864 * *((unsigned int *)a1 + 3)], v12);
      v11 = *((unsigned int *)a1 + 4);
      v9 = &(*a1)[v12];
    }
    else
    {
      v11 = *((unsigned int *)a1 + 2);
    }
    memcpy_0(v9, v6, 2864 * v11);
    memset(&(*a1)[2864 * *((unsigned int *)a1 + 2)], 0, 2864LL * *((unsigned int *)a1 + 2));
    *((_DWORD *)a1 + 4) = *((_DWORD *)a1 + 5);
    *((_DWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 2) = v7;
    operator delete(v6);
    goto LABEL_10;
  }
  v3 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 4, 221, 14);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 4, 74, 14);
  }
  return v3;
}
