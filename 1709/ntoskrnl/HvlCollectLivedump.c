/*
 * XREFs of HvlCollectLivedump @ 0x1401EF9DC
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x14042B400 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v8; // rbx
  _QWORD *v9; // r14
  __int16 v10; // ax
  int v11; // esi
  void *v12; // rcx
  unsigned int v13; // ebx
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-148h] BYREF
  PHYSICAL_ADDRESS v15[3]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v16[112]; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v17[32]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v18[64]; // [rsp+F0h] [rbp-78h] BYREF

  if ( (HvlpRootFlags & 2) == 0 || !qword_1403866A8 )
    return -1073741637;
  if ( VslVsmEnabled )
  {
    memset(v16, 0, 0x68uLL);
    result = VslpEnterIumSecureMode(2u, 234LL, 0, (__int64)v16);
    if ( result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else
  {
    v8 = HvlpAcquireHypercallPage(v14, 1, (__int64)v18, 32LL);
    v9 = (_QWORD *)HvlpAcquireHypercallPage(v15, 2, (__int64)v17, 16LL);
    *(_QWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 8) = *(_OWORD *)a2;
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a2 + 16);
    v10 = HvcallCodeVa();
    if ( !v10 || v10 == 51 )
    {
      *a3 = *v9;
      v11 = 0;
    }
    else
    {
      v11 = -1073741823;
    }
    HvlpReleaseHypercallPage((__int64)v14);
    HvlpReleaseHypercallPage((__int64)v15);
    if ( v11 >= 0 )
    {
      v12 = *(void **)(a4 + 32);
      v13 = dword_1403866B8 << 12;
      if ( v12 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v13 )
        memmove(v12, qword_1403866A8, v13);
      else
        *(_QWORD *)(a4 + 32) = qword_1403866A8;
      *(_DWORD *)(a4 + 40) = v13;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return v11;
  }
  return result;
}
