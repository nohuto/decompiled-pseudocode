/*
 * XREFs of ??_Grange_error@std@@UEAAPEAXI@Z @ 0x1800299A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::range_error *__fastcall std::range_error::`scalar deleting destructor'(std::range_error *this, char a2)
{
  exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
