/*
 * XREFs of ??1FlickRecognizer@@UEAA@XZ @ 0x1800DAFCC
 * Callers:
 *     _GestureSession::GestureSession_::_1_::dtor$0 @ 0x1800EA7EA (_GestureSession--GestureSession_--_1_--dtor$0.c)
 *     _GestureSession::GestureSession_::_1_::dtor$1 @ 0x1800EA7FA (_GestureSession--GestureSession_--_1_--dtor$1.c)
 *     _GestureSession::GestureSession_::_1_::dtor$2 @ 0x1800EA80D (_GestureSession--GestureSession_--_1_--dtor$2.c)
 *     _GestureSession::GestureSession_::_1_::dtor$3 @ 0x1800EA820 (_GestureSession--GestureSession_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::~FlickRecognizer(FlickRecognizer *this)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
}
