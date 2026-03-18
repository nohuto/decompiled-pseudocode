/*
 * XREFs of ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C000BC44
 * Callers:
 *     ?AddTokenToQueue@CTokenManager@@MEAAJPEAVCToken@@@Z @ 0x1C000F920 (-AddTokenToQueue@CTokenManager@@MEAAJPEAVCToken@@@Z.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0010BA0 (-EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAUCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1)
{
  _QWORD *v2; // rax

  v2 = operator new[](0x20uLL, 0x71744D54u, PagedPool);
  if ( v2 )
  {
    v2[2] = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    v2[1] = v2;
    *v2 = v2;
  }
  *a1 = (struct CTokenQueue *)v2;
  return v2 == 0LL ? 0xC0000017 : 0;
}
