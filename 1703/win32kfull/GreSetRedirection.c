/*
 * XREFs of GreSetRedirection @ 0x1C001C2E0
 * Callers:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetRedirection(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 5;
  v4 = HmgShareLockCheck(a1, a2);
  if ( v4 )
  {
    if ( v2 )
    {
      *(_DWORD *)(v4 + 112) |= 0x800u;
      *(_DWORD *)(v4 + 116) |= 0x80u;
    }
    else
    {
      *(_DWORD *)(v4 + 116) &= ~0x80u;
      *(_DWORD *)(v4 + 112) &= ~0x800u;
    }
    v3 = 1;
    DEC_SHARE_REF_CNT(v4);
  }
  return v3;
}
