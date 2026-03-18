/*
 * XREFs of ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x1801D94E0
 * Callers:
 *     ?cleanup@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAXXZ @ 0x1801F94E0 (-cleanup@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1801D94A4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

CompositorTracing *__fastcall CompositorTracing::`vector deleting destructor'(CompositorTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
