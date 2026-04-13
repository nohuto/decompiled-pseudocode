/*
 * XREFs of ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800762C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::PinToStartService::Invoke(
        CreativeFramework::Actions::PinToStartService *this,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4)
{
  const wchar_t *v4; // r8
  const wchar_t *v5; // rdx
  const WCHAR *v6; // rax

  v4 = (const wchar_t *)((char *)this + 72);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  v5 = (const wchar_t *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v5 = *(const wchar_t **)v5;
  v6 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v6 = *(const WCHAR **)v6;
  LOBYTE(a4) = *((_BYTE *)this + 104);
  CreativeFramework::Actions::PinToStart(v6, v5, v4, a4);
}
