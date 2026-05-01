/*
 * XREFs of ??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x1800975B8
 * Callers:
 *     Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x1800B6700 (Windows--Internal--Details--_dynamic_atexit_destructor_for___git__.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Details::Git::~Git(Windows::Internal::Details::Git *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&qword_180438B10);
}
