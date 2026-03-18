/*
 * XREFs of ?GetBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x18003AD50
 * Callers:
 *     ?GetBounds@CHwDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z @ 0x1800D63F0 (-GetBounds@CHwDisplayRenderTarget@@WLA@EAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CHwDisplayRenderTarget::GetBounds(CHwDisplayRenderTarget *this, struct MilRectF *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm0
  signed __int64 v5; // rax
  __int128 v6; // [rsp+0h] [rbp-28h] BYREF

  if ( (*((_BYTE *)this + 308) & 0x10) != 0 )
  {
    v2 = *((_QWORD *)this + 25);
    v3 = 4LL;
    v4 = *(_OWORD *)(v2 + 96);
    v5 = (char *)&v6 - (char *)a2;
    v6 = v4;
    do
    {
      *(float *)a2 = (float)*(int *)((char *)a2 + v5);
      a2 = (struct MilRectF *)((char *)a2 + 4);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    *((float *)a2 + 2) = (float)*((int *)this + 2);
    *((float *)a2 + 3) = (float)*((int *)this + 3);
  }
}
